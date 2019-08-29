
#include "py_Grabber.h"
//cocos头文件
#include "2d/CCGrabber.h"

namespace py_cocos2d
{

PyObject* PyGrabber_holder(PyGrabber *self)
{
    PLOGD("================PyGrabber HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// void afterRender(Texture2D *texture)
PyObject* PyGrabber_afterRender(PyGrabber *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Grabber *dr = dynamic_cast<cocos2d::Grabber*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void grab(Texture2D *texture)
PyObject* PyGrabber_grab(PyGrabber *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Grabber *dr = dynamic_cast<cocos2d::Grabber*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void beforeRender(Texture2D *texture)
PyObject* PyGrabber_beforeRender(PyGrabber *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Grabber *dr = dynamic_cast<cocos2d::Grabber*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyGrabber_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyGrabber new Grabber");

    PyGrabber *self;
    self = (PyGrabber*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyGrabber failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Grabber::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyGrabber new Grabber %p",self->ob_body);

    return (PyObject*)self;
}

void PyGrabber_Dealloc(PyGrabber *self)
{
    PLOGD("=====PyGrabber Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyGrabber_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyGrabber_methods[] = {
	{"afterRender",(PyCFunction)PyGrabber_afterRender,METH_VARARGS,""},
	{"grab",(PyCFunction)PyGrabber_grab,METH_VARARGS,""},
	{"beforeRender",(PyCFunction)PyGrabber_beforeRender,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyGrabberType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CGrabber",                       /* tp_name */\
    sizeof(PyGrabber),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyGrabber_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyGrabber_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyGrabber_New,                     /* newfunc tp_new; */
};

}
