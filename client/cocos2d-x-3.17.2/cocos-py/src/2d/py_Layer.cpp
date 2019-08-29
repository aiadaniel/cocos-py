
#include "py_Layer.h"
//cocos头文件
#include "2d/CCLayer.h"

namespace py_cocos2d
{

PyObject* PyLayer_holder(PyLayer *self)
{
    PLOGD("================PyLayer HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// static Layer * create()
PyObject* PyLayer_create(PyLayer *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchesCancelled(const std::vector< Touch * > &touches, Event *unusedevent)
PyObject* PyLayer_onTouchesCancelled(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool onTouchBegan(Touch *touch, Event *unusedevent)
PyObject* PyLayer_onTouchBegan(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchMoved(Touch *touch, Event *unusedevent)
PyObject* PyLayer_onTouchMoved(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchEnded(Touch *touch, Event *unusedevent)
PyObject* PyLayer_onTouchEnded(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchCancelled(Touch *touch, Event *unusedevent)
PyObject* PyLayer_onTouchCancelled(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchesBegan(const std::vector< Touch * > &touches, Event *unusedevent)
PyObject* PyLayer_onTouchesBegan(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchesMoved(const std::vector< Touch * > &touches, Event *unusedevent)
PyObject* PyLayer_onTouchesMoved(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchesEnded(const std::vector< Touch * > &touches, Event *unusedevent)
PyObject* PyLayer_onTouchesEnded(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isKeyboardEnabled(const)
PyObject* PyLayer_isKeyboardEnabled(PyLayer *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void registerWithTouchDispatcher(final)
PyObject* PyLayer_registerWithTouchDispatcher(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool isTouchEnabled(const)
PyObject* PyLayer_isTouchEnabled(PyLayer *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void didAccelerate(Acceleration * final)
PyObject* PyLayer_didAccelerate(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onAcceleration(Acceleration *acc, Event *unusedevent)
PyObject* PyLayer_onAcceleration(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isAccelerometerEnabled(const)
PyObject* PyLayer_isAccelerometerEnabled(PyLayer *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onKeyPressed(a class=el href=dddf2groupbasehtmlga7885f47644a0388f981f416fa20389b2EventKeyboard::KeyCodea keyCode, Event *event)
PyObject* PyLayer_onKeyPressed(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setSwallowsTouches(bool swallowsTouches)
PyObject* PyLayer_setSwallowsTouches(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void keyReleased(int final)
PyObject* PyLayer_keyReleased(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void keyBackClicked(final)
PyObject* PyLayer_keyBackClicked(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onKeyReleased(a class=el href=dddf2groupbasehtmlga7885f47644a0388f981f416fa20389b2EventKeyboard::KeyCodea keyCode, Event *event)
PyObject* PyLayer_onKeyReleased(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void keyPressed(int final)
PyObject* PyLayer_keyPressed(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const override)
PyObject* PyLayer_getDescription(PyLayer *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Layer *dr = dynamic_cast<cocos2d::Layer*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyLayer_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyLayer new Layer");

    PyLayer *self;
    self = (PyLayer*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyLayer failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Layer::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyLayer new Layer %p",self->ob_body);

    return (PyObject*)self;
}

void PyLayer_Dealloc(PyLayer *self)
{
    PLOGD("=====PyLayer Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyLayer_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyLayer_methods[] = {
	{"create",(PyCFunction)PyLayer_create,METH_NOARGS,""},
	{"onTouchesCancelled",(PyCFunction)PyLayer_onTouchesCancelled,METH_VARARGS,""},
	{"onTouchBegan",(PyCFunction)PyLayer_onTouchBegan,METH_VARARGS,""},
	{"onTouchMoved",(PyCFunction)PyLayer_onTouchMoved,METH_VARARGS,""},
	{"onTouchEnded",(PyCFunction)PyLayer_onTouchEnded,METH_VARARGS,""},
	{"onTouchCancelled",(PyCFunction)PyLayer_onTouchCancelled,METH_VARARGS,""},
	{"onTouchesBegan",(PyCFunction)PyLayer_onTouchesBegan,METH_VARARGS,""},
	{"onTouchesMoved",(PyCFunction)PyLayer_onTouchesMoved,METH_VARARGS,""},
	{"onTouchesEnded",(PyCFunction)PyLayer_onTouchesEnded,METH_VARARGS,""},
	{"isKeyboardEnabled",(PyCFunction)PyLayer_isKeyboardEnabled,METH_NOARGS,""},
	{"registerWithTouchDispatcher",(PyCFunction)PyLayer_registerWithTouchDispatcher,METH_VARARGS,""},
	{"isTouchEnabled",(PyCFunction)PyLayer_isTouchEnabled,METH_NOARGS,""},
	{"didAccelerate",(PyCFunction)PyLayer_didAccelerate,METH_VARARGS,""},
	{"onAcceleration",(PyCFunction)PyLayer_onAcceleration,METH_VARARGS,""},
	{"isAccelerometerEnabled",(PyCFunction)PyLayer_isAccelerometerEnabled,METH_NOARGS,""},
	{"onKeyPressed",(PyCFunction)PyLayer_onKeyPressed,METH_VARARGS,""},
	{"setSwallowsTouches",(PyCFunction)PyLayer_setSwallowsTouches,METH_VARARGS,""},
	{"keyReleased",(PyCFunction)PyLayer_keyReleased,METH_VARARGS,""},
	{"keyBackClicked",(PyCFunction)PyLayer_keyBackClicked,METH_VARARGS,""},
	{"onKeyReleased",(PyCFunction)PyLayer_onKeyReleased,METH_VARARGS,""},
	{"keyPressed",(PyCFunction)PyLayer_keyPressed,METH_VARARGS,""},
	{"getDescription",(PyCFunction)PyLayer_getDescription,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyLayerType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CLayer",                       /* tp_name */\
    sizeof(PyLayer),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyLayer_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyLayer_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyLayer_New,                     /* newfunc tp_new; */
};

}
