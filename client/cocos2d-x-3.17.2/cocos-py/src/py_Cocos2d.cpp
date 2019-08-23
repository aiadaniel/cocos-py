#include "py_CCDirector.h"
#include "py_Tracelog.h"
#include "cocos2d.h"

#include <stdio.h>
#include <string.h>

namespace py_cocos2d
{

char appLibPath[256];
char appFilePath[256];

static PyMethodDef module_methods[] = {
    {NULL,NULL,0,NULL},
};

static PyModuleDef cocos_moduledef = {
    PyModuleDef_HEAD_INIT,      /* m_base */
    "pycocos2d",                /* m_name */
    "py wrap for cocos2d",      /* m_doc */
    -1,                         /* m_size */
    module_methods,             /* m_methods */
};

void setScriptPath(const char *appFile,const char *appLib)
{
    strcpy(appFilePath,appFile);
    strcpy(appLibPath,appLib);
}

PyObject* PyInit_pycocos2d()
{
    if (PyType_Ready(&PyDirectorType) < 0)
        abort();

    PyObject *module = PyModule_Create(&cocos_moduledef);
    if (!module)
        abort();

    Py_INCREF(&PyDirectorType);

    PyModule_AddObject(module,"PyDirector",(PyObject*)&PyDirectorType);

    PyModule_AddIntConstant(module,"PYSUCCESS",1);
    PyModule_AddIntConstant(module,"PYFAIL",0);
    //其他查看api

    return module;
}

#define TEMP_DEBUG
#ifdef TEMP_DEBUG
#define DDD PLOGD("==================================================");
#endif

// 主循环，相当于main
void startup()
{
    /* see doc: https://docs.python.org/3.7/c-api/init.html#pre-init-safe */
    PLOGD("=====python will start up=====");
    int res = PyImport_AppendInittab("pycocos2d",PyInit_pycocos2d);   //初始化模块
    PLOGD("=====PyImport_AppendInittab return %d",res);

    // 尝试一：java层把python3.7m.MP3解压到appFile文件夹下
    //char dest[256];
    //sprintf(dest,"%s/%s", appFilePath,"python3.7m.zip");
    const char *fullPythonPath = appFilePath;
        //cocos2d::FileUtils::getInstance()->fullPathForFilename("python3.7m.MP3").c_str();// assets/python3.7.MP3
        //dest; 
    unsigned int len = 0;
    wchar_t *homePath = Py_DecodeLocale(fullPythonPath,&len);
    PLOGD("=====fullpythonpath: %s    len: %d",fullPythonPath,len);
    //Py_SetPythonHome(homePath);//把python3.7m.MP3脚本文件路径设置进去
    Py_SetPath(homePath);

    PLOGD("=====python will Initialize=====");
    Py_Initialize();
    if (!Py_IsInitialized()) {
        //log
        PLOGD("=====Py_Initialize failed!");
        return;
    }
    PLOGD("=====python Initialize ok=====");

    // 将当前路径加入解释器的搜索路径
    PyRun_SimpleString("print 'hello pycocos2d'");
    DDD
    PyRun_SimpleString("import sys");
    DDD
    char dest[256];
    sprintf(dest,"sys.path.append('%s/%s')", appFilePath,"site-packages");// "pyscripts"
    PLOGD("=====sys.path %s",dest);
    PyRun_SimpleString(dest);
    DDD
    sprintf(dest,"sys.path.append('%s/%s')", appFilePath,"pylib-dynload");// "pyscripts"
    PLOGD("=====sys.path %s",dest);
    PyRun_SimpleString(dest);
    DDD
    sprintf(dest,"sys.path.append('%s/%s')", appFilePath,"pyscripts");// "pyscripts"
    PLOGD("=====sys.path %s",dest);
    PyRun_SimpleString(dest);
    DDD
    wchar_t* pythonHome = Py_GetProgramFullPath();//Py_GetPythonHome();
    if (pythonHome != nullptr) {
        char* pythonHomeStr = Py_EncodeLocale(pythonHome,NULL);
        PLOGD("=====python home: %s",pythonHomeStr);
    }

    // 获取python解释器版本号
    PyObject *platform = PyImport_ImportModule("platform");
    DDD
    if (platform != nullptr) {
        PyObject *funcVersion = PyObject_GetAttrString(platform,"python_version");
        DDD
        PyObject *sVer = PyUnicode_AsEncodedString(PyEval_CallObject(funcVersion,NULL),"utf-8","~E~");
        PLOGD("=====python interpreter version: %s",PyBytes_AS_STRING(sVer));
    } else {
        PLOGD("=====import platform not found");
    }

    // 获取python解释器搜索路径
    PyObject *sys = PyImport_ImportModule("sys");
    DDD
    PyObject *funcPath = PyObject_GetAttrString(sys,"path");
    DDD
    PyObject *sPath = PyUnicode_AsEncodedString(PyObject_Repr(funcPath),"utf-8","~E~");
    PLOGD("=====python interpreter path: %s",PyBytes_AS_STRING(sPath));

    // 主循环，需要提供main.py脚本
    PyObject *mMain = PyImport_ImportModule("main");
    if (!mMain) {
        PLOGD("=====err not main");
        Py_Finalize();
        return;
    }
    DDD
    PyRun_SimpleString("import main");
    DDD
    PyRun_SimpleString("main.bootstrap()");
    DDD
}

    
}