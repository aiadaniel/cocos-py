#include "py_CCDirector.h"

namespace py_cocos2d
{

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

PyObject* PyInit_pycocos2d()
{
    if (PyType_Ready(&PyDirectorType) < 0)
        abort();

    PyObject *module = PyModule_Create(&cocos_moduledef);
    if (!module)
        abort();

    Py_INCREF(&PyDirectorType);

    PyModule_AddObject(module,"CDirector",(PyObject*)&PyDirectorType);

    PyModule_AddIntConstant(module,"PYSUCCESS",1);
    PyModule_AddIntConstant(module,"PYFAIL",1);
    //其他查看api

    return module;
}

// 主循环，相当于main
void startup()
{
    printf("=====python will start up=====");
    PyImport_AppendInittab("pycocos2d",PyInit_pycocos2d);   //初始化模块

    Py_Initialize();
    if (!Py_IsInitialized()) {
        //log
        printf("Py_Initialize failed!");
        return;
    }

    // 获取python解释器版本号
    PyObject *platform = PyImport_ImportModule("platform");
    PyObject *funcVersion = PyObject_GetAttrString(platform,"python_version");
    PyObject *sVer = PyUnicode_AsEncodedString(PyEval_CallObject(funcVersion,NULL),"utf-8","~E~");
    printf("python interpreter version: %s",PyBytes_AS_STRING(sVer));

    // 将当前路径加入解释器的搜索路径
    PyRun_SimpleString("print 'hello pycocos2d'");
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");

    // 获取python解释器搜索路径
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *funcPath = PyObject_GetAttrString(sys,"path");
    PyObject *sPath = PyUnicode_AsEncodedString(PyObject_Repr(funcPath),"utf-8","~E~");
    printf("python interpreter path: %s",PyBytes_AS_STRING(sPath));

    // 主循环，需要提供main.py脚本
    PyObject *mMain = PyImport_ImportModule("main");
    if (!mMain) {
        printf("err not main");
        Py_Finalize();
        return;
    }
    PyRun_SimpleString("import main");
    PyRun_SimpleString("main.bootstrap()");
}

    
}