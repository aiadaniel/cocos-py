
#include "py_CCDirector.h"

namespace py_cocos2d
{

PyObject* PyDirector_holder(PyDirector *self)
{
#ifdef PY_DEBUG
    PLOGD("================JUST A HOLDPLACE==================");
#endif
    Py_RETURN_NONE;
} 

PyObject* PyDirector_setDisplayStats(PyDirector *self,PyObject *args) 
{
    PLOGD("================JUST A HOLDPLACE==================");
    // @see py_Common.h
    int display = true;
    if (!PyArg_ParseTuple(args,"p",&display)) {
        return NULL;
    }

    // ((Director*)self->ob_body)->setDisplayStats(display);
    cocos2d::Director *dr = dynamic_cast<cocos2d::Director*>(self->ob_body);//
    if (dr != nullptr)
        dr->setDisplayStats(display);

    Py_RETURN_NONE;
}

//=================================================================

PyObject* PyDirector_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyDirector new Director");

    PyDirector *self;
    self = (PyDirector*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyDirector failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    self->ob_body = (Director::getInstance());//dynamic_cast<cocos2d::Ref*>
#ifdef PY_DEBUG
    PLOGD("PyDirector new Director %p",self->ob_body);
#endif

    //Py_INCREF(self);
    return (PyObject*)self;
}

void PyDirector_Dealloc(PyDirector *self) 
{
    PLOGD("=====PyDirector Dealloc");
    //add your delete here
    //delete self->ob_body;//TODO 暂时去掉，pyhon层应该是全局变量
    PLOGD("=====PyDirector Dealloc");
    //self->ob_base.ob_type->tp_free(self);//暂时
    PLOGD("=====PyDirector Dealloc");
}

// int PyDirector_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyDirector_methods[] = {
    {"setDisplayStats",(PyCFunction)PyDirector_setDisplayStats,METH_VARARGS,"setDisplayStats"},
    {"holder",(PyCFunction)PyDirector_holder,METH_NOARGS,"place holder"},
    {NULL,NULL,0,NULL}
};

PyTypeObject PyDirectorType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CDirector",                       /* tp_name */\
    sizeof(PyDirector),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\
    
    /* Methods to implement standard operations */

    (destructor)(PyDirector_Dealloc),        /* destructor tp_dealloc;*/\
    0,                                  /* printfunc tp_print;*/\
    0,                                  /* getattrfunc tp_getattr;*/\
    0,                                  /* setattrfunc tp_setattr; */\
    0,                                  /* tp_as_async;formerly known as tp_compare (Python 2) or tp_reserved (Python 3) */\
    0,                                  /* reprfunc tp_repr; */\

    /* Method suites for standard classes */

    0,                                  /* PyNumberMethods *tp_as_number; */\
    0,                                  /* PySequenceMethods *tp_as_sequence; */\
    0,                                  /* PyMappingMethods *tp_as_mapping; */\

    /* More standard operations (here for binary compatibility) */

    0,                                  /* hashfunc tp_hash; */\
    0,                                  /* ternaryfunc tp_call; */\
    0,                                  /* reprfunc tp_str; */\
    0,                                  /* getattrofunc tp_getattro; */\
    0,                                  /* setattrofunc tp_setattro; */\

    /* Functions to access object as input/output buffer */
    0,                                  /* PyBufferProcs *tp_as_buffer; */\

    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,       /* long tp_flags; */\

    0,                                  /* const char *tp_doc;  Documentation string  */\

    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    0,                                  /* traverseproc tp_traverse; */\

    /* delete references to contained objects */
    0,                                  /* tp_clear; */\

    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    0,                                  /* richcmpfunc tp_richcompare; */\

    /* weak reference enabler */
    0,                                  /* Py_ssize_t tp_weaklistoffset; */\

    /* Added in release 2.2 */
    /* Iterators */
    0,                                  /* getiterfunc tp_iter; */\
    0,                                  /* iternextfunc tp_iternext; */\

    /* Attribute descriptor and subclassing stuff */
    PyDirector_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyDirector_New,                     /* newfunc tp_new; */
};

}