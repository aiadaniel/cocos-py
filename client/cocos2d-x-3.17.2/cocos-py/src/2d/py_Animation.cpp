
#include "py_Animation.h"
//cocos头文件
#include "2d/CCAnimation.h"

namespace py_cocos2d
{

PyObject* PyAnimation_holder(PyAnimation *self)
{
    PLOGD("================PyAnimation HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// void addSpriteFrame(SpriteFrame *frame)
PyObject* PyAnimation_addSpriteFrame(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void addSpriteFrameWithFile(const std::string &filename)
PyObject* PyAnimation_addSpriteFrameWithFile(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void addSpriteFrameWithFileName(const std::string &filename)
PyObject* PyAnimation_addSpriteFrameWithFileName(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void addSpriteFrameWithTexture(Texture2D *pobTexture, const Rect &rect)
PyObject* PyAnimation_addSpriteFrameWithTexture(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getTotalDelayUnits(const)
PyObject* PyAnimation_getTotalDelayUnits(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setDelayPerUnit(float delayPerUnit)
PyObject* PyAnimation_setDelayPerUnit(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getDelayPerUnit(const)
PyObject* PyAnimation_getDelayPerUnit(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// float getDuration(const)
PyObject* PyAnimation_getDuration(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// const Vector< AnimationFrame * > & getFrames(const)
PyObject* PyAnimation_getFrames(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setFrames(const Vector< AnimationFrame * > &frames)
PyObject* PyAnimation_setFrames(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool getRestoreOriginalFrame(const)
PyObject* PyAnimation_getRestoreOriginalFrame(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setRestoreOriginalFrame(bool restoreOriginalFrame)
PyObject* PyAnimation_setRestoreOriginalFrame(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// unsigned int getLoops(const)
PyObject* PyAnimation_getLoops(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void setLoops(unsigned int loops)
PyObject* PyAnimation_setLoops(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual Animation * clone(const override)
PyObject* PyAnimation_clone(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Animation * create(void)
PyObject* PyAnimation_create(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool init()
PyObject* PyAnimation_init(PyAnimation *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool initWithAnimationFrames(const Vector< AnimationFrame * > &arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops)
PyObject* PyAnimation_initWithAnimationFrames(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool initWithSpriteFrames(const Vector< SpriteFrame * > &arrayOfSpriteFrameNames, float delay=00f, unsigned int loops=1)
PyObject* PyAnimation_initWithSpriteFrames(PyAnimation *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Animation *dr = dynamic_cast<cocos2d::Animation*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyAnimation_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyAnimation new Animation");

    PyAnimation *self;
    self = (PyAnimation*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyAnimation failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Animation::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyAnimation new Animation %p",self->ob_body);

    return (PyObject*)self;
}

void PyAnimation_Dealloc(PyAnimation *self)
{
    PLOGD("=====PyAnimation Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyAnimation_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyAnimation_methods[] = {
	{"addSpriteFrame",(PyCFunction)PyAnimation_addSpriteFrame,METH_VARARGS,""},
	{"addSpriteFrameWithFile",(PyCFunction)PyAnimation_addSpriteFrameWithFile,METH_VARARGS,""},
	{"addSpriteFrameWithFileName",(PyCFunction)PyAnimation_addSpriteFrameWithFileName,METH_VARARGS,""},
	{"addSpriteFrameWithTexture",(PyCFunction)PyAnimation_addSpriteFrameWithTexture,METH_VARARGS,""},
	{"getTotalDelayUnits",(PyCFunction)PyAnimation_getTotalDelayUnits,METH_NOARGS,""},
	{"setDelayPerUnit",(PyCFunction)PyAnimation_setDelayPerUnit,METH_VARARGS,""},
	{"getDelayPerUnit",(PyCFunction)PyAnimation_getDelayPerUnit,METH_NOARGS,""},
	{"getDuration",(PyCFunction)PyAnimation_getDuration,METH_NOARGS,""},
	{"getFrames",(PyCFunction)PyAnimation_getFrames,METH_NOARGS,""},
	{"setFrames",(PyCFunction)PyAnimation_setFrames,METH_VARARGS,""},
	{"getRestoreOriginalFrame",(PyCFunction)PyAnimation_getRestoreOriginalFrame,METH_NOARGS,""},
	{"setRestoreOriginalFrame",(PyCFunction)PyAnimation_setRestoreOriginalFrame,METH_VARARGS,""},
	{"getLoops",(PyCFunction)PyAnimation_getLoops,METH_NOARGS,""},
	{"setLoops",(PyCFunction)PyAnimation_setLoops,METH_VARARGS,""},
	{"clone",(PyCFunction)PyAnimation_clone,METH_VARARGS,""},
	{"create",(PyCFunction)PyAnimation_create,METH_NOARGS,""},
	{"init",(PyCFunction)PyAnimation_init,METH_NOARGS,""},
	{"initWithAnimationFrames",(PyCFunction)PyAnimation_initWithAnimationFrames,METH_VARARGS,""},
	{"initWithSpriteFrames",(PyCFunction)PyAnimation_initWithSpriteFrames,METH_VARARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyAnimationType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CAnimation",                       /* tp_name */\
    sizeof(PyAnimation),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyAnimation_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyAnimation_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyAnimation_New,                     /* newfunc tp_new; */
};

}
