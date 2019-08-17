#pragma comment (lib,"python27.lib")

#include "python.h"

//c++对象
class CTest
{
    int _v;
public:
    //相关python对象
    PyObject    *_object;
public:
    CTest():_v(22),_object(NULL)
    {
        printf("CTest::CTest%p\n",this);
    }

    void AddRef(int v)
    {
        _v += v;
        printf("CTest::AddRef = %d\n",_v);
    }

    int DelRef() 
    {
        printf("CTest::DelRef = %d\n",_v);
        if (_v == 0)
        {
            delete this;
            return 0;
        }
        return _v;
    }

    virtual ~CTest()
    {
        printf("CTest::~CTest %p\n",this);
    };
};

//对应脚本中的python对象，解析python脚本，会生成这么一个对象
struct PY_Test
{
    PyObject_HEAD
    PyObject    *ob_dict;
    CTest       *ob_body;
    PyObject    *ob_weaklist;
};

//生成PY_Test对象
PyObject* CTest_New(PyTypeObject *type,PyObject *args,PyObject *kwds);

//生成CTest对象
int CTest_Init(PyObject *pself,PyObject *args,PyObject *kwds);

//导出的方法
PyMethodDef* CTest_GetMethods();

//python对象应用计数为0时调用
void CTest_Dealloc(PY_Test *self);

//容器类对象使用
int CTest_Clear(PY_Test *self);

//遍历
int CTest_Traverse(PY_Test *self,visitproc visit,void *args);

//比较是否相等
int CTest_Compare(PY_Test *self,PyObject *cmp);

//通过以下对象来创建PY_Test的python对象及其所有行为
PyTypeObject PY_TestType = {            \
    PyObject_HEAD_INIT(NULL)            \
    0,                     /* ob_size */\
    "CTest",               /* tp_name */\
    sizeof(PY_Test),    /* tp_basicsize */\
    0,                  /* tp_itemsize */\
    
    /* Methods to implement standard operations */

    (destructor)(CTest_Dealloc), /*destructor tp_dealloc;*/\
    0,                          /* printfunc tp_print;*/\
    0,                          /*getattrfunc tp_getattr;*/\
    0,                          /*setattrfunc tp_setattr; */\
    (cmpfunc)(CTest_Compare),   /* tp_compare */\
    0,                          /* reprfunc tp_repr; */\

    /* Method suites for standard classes */

    0,                          /* PyNumberMethods *tp_as_number; */\
    0,                          /* PySequenceMethods *tp_as_sequence; */\
    0,                          /* PyMappingMethods *tp_as_mapping; */\

    /* More standard operations (here for binary compatibility) */

    0,                          /* hashfunc tp_hash; */\
    0,                          /* ternaryfunc tp_call; */\
    0,                          /* reprfunc tp_str; */\
    0,                          /* getattrofunc tp_getattro; */\
    0,                          /* setattrofunc tp_setattro; */\

    /* Functions to access object as input/output buffer */
    0,                          /* PyBufferProcs *tp_as_buffer; */\

    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /* long tp_flags; */\

    0,                          /* const char *tp_doc;  Documentation string  */\

    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    (traverseproc)(CTest_Traverse), /* traverseproc tp_traverse; */\

    /* delete references to contained objects */
    (inquiry)(CTest_Clear),     /* tp_clear; */\

    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    0,                          /* richcmpfunc tp_richcompare; */\

    /* weak reference enabler */
    offsetof(PY_Test,ob_weaklist),  /* Py_ssize_t tp_weaklistoffset; */\

    /* Added in release 2.2 */
    /* Iterators */
    0,                          /* getiterfunc tp_iter; */\
    0,                          /* iternextfunc tp_iternext; */\

    /* Attribute descriptor and subclassing stuff */
    CTest_GetMethods(),         /* struct PyMethodDef *tp_methods; */\
    0,                          /* struct PyMemberDef *tp_members; */\
    0,                          /* struct PyGetSetDef *tp_getset; */\
    0,                          /* struct _typeobject *tp_base; */\
    0,                          /* PyObject *tp_dict; */\
    0,                          /* descrgetfunc tp_descr_get; */\
    0,                          /* descrsetfunc tp_descr_set; */\
    offsetof(PY_Test,ob_dict),  /* Py_ssize_t tp_dictoffset; */\
    (initproc)(CTest_Init),     /* initproc tp_init; */\
    0,                          /* allocfunc tp_alloc; */\
    CTest_New,                  /* newfunc tp_new; */
};

//生成PY_Test对象
PyObject* CTest_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    PY_Test *self = NULL;
    self = (PY_Test *)type->tp_alloc(type,0);
    if (self != NULL) {
        self->ob_dict = PyDict_New();
        self->ob_weaklist = NULL;
        self->ob_body = NULL;
    }
    return (PyObject*)self;
}

//生成CTest对象
int CTest_Init(PyObject *pself,PyObject *args,PyObject *kwds)
{
    PY_Test *self = (PY_Test*)pself;
    CTest *node = new CTest();
    if (node) {
        self->ob_body = node;
        node->_object = (PyObject*)self;
        return 1;
    }
    return 0;
}

PyObject* CTest_AddRef(PY_Test *self,PyObject *args)
{
    int p1;
    if (PyArg_ParseTuple(args,"i",&p1)) {
        self->ob_body->AddRef(p1);
    }
    Py_INCREF(Py_None);
    return Py_None;
}

PyObject* CTest_DelRef(PY_Test *self,PyObject *args)
{
    int iret = self->ob_body->DelRef();
    return Py_BuildValue("i", iret);
}

//导出的方法
PyMethodDef* CTest_GetMethods()
{
    static PyMethodDef methods[3] = 
    {
        {"AddRef",(PyCFunction)CTest_AddRef,METH_VARARGS,""},
        {"DelRef",(PyCFunction)CTest_DelRef,METH_NOARGS,""},
        {0,0,0,0}
    };
    return methods;
}

//python对象应用计数为0时调用
void CTest_Dealloc(PY_Test *self)
{
    if (self->ob_dict) {
        Py_DECREF(self->ob_dict);
        self->ob_dict = NULL;
    }
    if (self->ob_body) {
        self->ob_body->DelRef();
    }
    self->ob_type->tp_free((PyObject*)self);
}

//容器类对象使用
int CTest_Clear(PY_Test *self)
{
    if (self->ob_dict) {
        Py_DECREF(self->ob_dict);
        self->ob_dict = NULL;
    }
    return 0;
}

//遍历
int CTest_Traverse(PY_Test *self,visitproc visit,void *args)
{
    if (self->ob_dict) {
        return visit(self->ob_dict, args);
    }
    return 0;
}

//比较是否相等
int CTest_Compare(PY_Test *self,PyObject *cmp)
{
    if (self->ob_body == ((PY_Test*)cmp)->ob_body) {
        return 0;
    }
    return 1;
}

/*****************************************************************************/
/*****************************************************************************/

//以下测试将C_test的python模块加入到系统中，脚本import C_test，就可以使用它导出的类与方法
PyMODINIT_FUNC TestInit()
{
    PyObject *m = NULL;
    m = Py_InitModule("C_test", NULL);
    if (m == NULL) {
        return;
    }
    if (PyType_Ready(&PY_TestType) < 0) {
        return;
    }
    Py_INCREF(&PY_TestType);
    //添加类到模块，参数：模块指针、类名、类型
    PyModule_AddObject(m, "CTest", (PyObject*)&PY_TestType);
}

#include "pythread.h"
int main()
{
    Py_Initialize();

    PyRun_SimpleString("print 'hello py'");
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");

    TestInit();

    //导入脚本zzz.py
    PyObject *pModule = PyImport_ImportModule("zzz");

    //导入函数
    PyObject *pFunc = PyObject_GetAttrString(pModule, "Func");
    Py_DECREF(pModule);
    if (pFunc) {
        PyObject *result = PyEval_CallObject(pFunc,NULL);
        char *n = 0;
        PyArg_Parse(result,"s",&n);
        Py_XDECREF(pFunc);
    }
    Py_XDECREF(pModule);

    Py_Finalize();
    return 0;
}