
#include "py_Scene.h"
//cocos头文件
#include "2d/CCScene.h"

namespace py_cocos2d
{

PyObject* PyScene_holder(PyScene *self)
{
    PLOGD("================PyScene HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const override)
PyObject* PyScene_getDescription(PyScene *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Scene * createWithPhysics()
PyObject* PyScene_createWithPhysics(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::vector< Camera * > & getCameras()
PyObject* PyScene_getCameras(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// Camera * getDefaultCamera(const)
PyObject* PyScene_getDefaultCamera(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// PhysicsWorld * getPhysicsWorld(const)
PyObject* PyScene_getPhysicsWorld(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Scene * create()
PyObject* PyScene_create(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Scene * createWithSize(const Size &size)
PyObject* PyScene_createWithSize(PyScene *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void render(Renderer *renderer, const Mat4 &eyeTransform, const Mat4 *eyeProjection=nullptr)
PyObject* PyScene_render(PyScene *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const std::vector< BaseLight * > & getLights(const)
PyObject* PyScene_getLights(PyScene *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void render_1(Renderer *renderer, const Mat4 *eyeTransforms, const Mat4 *eyeProjections, unsigned int multiViewCount)
PyObject* PyScene_render_1(PyScene *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeAllChildren(override)
PyObject* PyScene_removeAllChildren(PyScene *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Scene *dr = dynamic_cast<cocos2d::Scene*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyScene_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyScene new Scene");

    PyScene *self;
    self = (PyScene*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyScene failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Scene::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyScene new Scene %p",self->ob_body);

    return (PyObject*)self;
}

void PyScene_Dealloc(PyScene *self)
{
    PLOGD("=====PyScene Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyScene_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyScene_methods[] = {
	{"getDescription",(PyCFunction)PyScene_getDescription,METH_VARARGS,""},
	{"createWithPhysics",(PyCFunction)PyScene_createWithPhysics,METH_NOARGS,""},
	{"getCameras",(PyCFunction)PyScene_getCameras,METH_NOARGS,""},
	{"getDefaultCamera",(PyCFunction)PyScene_getDefaultCamera,METH_NOARGS,""},
	{"getPhysicsWorld",(PyCFunction)PyScene_getPhysicsWorld,METH_NOARGS,""},
	{"create",(PyCFunction)PyScene_create,METH_NOARGS,""},
	{"createWithSize",(PyCFunction)PyScene_createWithSize,METH_VARARGS,""},
	{"render",(PyCFunction)PyScene_render,METH_VARARGS,""},
	{"getLights",(PyCFunction)PyScene_getLights,METH_NOARGS,""},
	{"render_1",(PyCFunction)PyScene_render_1,METH_VARARGS,""},
	{"removeAllChildren",(PyCFunction)PyScene_removeAllChildren,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PySceneType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CScene",                       /* tp_name */\
    sizeof(PyScene),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyScene_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyScene_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyScene_New,                     /* newfunc tp_new; */
};

}
