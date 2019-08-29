
#include "py_Menu.h"
//cocos头文件
#include "2d/CCMenu.h"

namespace py_cocos2d
{

PyObject* PyMenu_holder(PyMenu *self)
{
    PLOGD("================PyMenu HOLDPLACE==================");
    Py_RETURN_NONE;
}

//// bool initWithArray(const Vector< MenuItem * > &arrayOfItems)
PyObject* PyMenu_initWithArray(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchMoved(Touch *touch, Event *event override)
PyObject* PyMenu_onTouchMoved(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsVertically()
PyObject* PyMenu_alignItemsVertically(PyMenu *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsVerticallyWithPadding(float padding)
PyObject* PyMenu_alignItemsVerticallyWithPadding(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsHorizontally()
PyObject* PyMenu_alignItemsHorizontally(PyMenu *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsHorizontallyWithPadding(float padding)
PyObject* PyMenu_alignItemsHorizontallyWithPadding(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInColumns(int columns, CCREQUIRESNULLTERMINATION)
PyObject* PyMenu_alignItemsInColumns(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInColumns_1(int columns, valist args)
PyObject* PyMenu_alignItemsInColumns_1(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInColumnsWithArray(const ValueVector &rows)
PyObject* PyMenu_alignItemsInColumnsWithArray(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInRows(int rows, CCREQUIRESNULLTERMINATION)
PyObject* PyMenu_alignItemsInRows(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInRows_1(int rows, valist args)
PyObject* PyMenu_alignItemsInRows_1(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// void alignItemsInRowsWithArray(const ValueVector &columns)
PyObject* PyMenu_alignItemsInRowsWithArray(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isEnabled(const)
PyObject* PyMenu_isEnabled(PyMenu *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setEnabled(bool value)
PyObject* PyMenu_setEnabled(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool onTouchBegan(Touch *touch, Event *event override)
PyObject* PyMenu_onTouchBegan(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchEnded(Touch *touch, Event *event override)
PyObject* PyMenu_onTouchEnded(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void setOpacityModifyRGB(bool value override)
PyObject* PyMenu_setOpacityModifyRGB(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void removeChild(Node *child, bool cleanup override)
PyObject* PyMenu_removeChild(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild(Node *child override)
PyObject* PyMenu_addChild(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_1(Node *child, int zOrder override)
PyObject* PyMenu_addChild_1(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_2(Node *child, int zOrder, int tag override)
PyObject* PyMenu_addChild_2(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void addChild_3(Node *child, int zOrder, const std::string &name override)
PyObject* PyMenu_addChild_3(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onEnter(override)
PyObject* PyMenu_onEnter(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onExit(override)
PyObject* PyMenu_onExit(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Menu * createWithItems(MenuItem *firstItem, valist args)
PyObject* PyMenu_createWithItems(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Menu * createWithItem(MenuItem *item)
PyObject* PyMenu_createWithItem(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual void onTouchCancelled(Touch *touch, Event *event override)
PyObject* PyMenu_onTouchCancelled(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual std::string getDescription(const override)
PyObject* PyMenu_getDescription(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Menu * createWithArray(const Vector< MenuItem * > &arrayOfItems)
PyObject* PyMenu_createWithArray(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// bool init(override)
PyObject* PyMenu_init(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// virtual bool isOpacityModifyRGB(void const override)
PyObject* PyMenu_isOpacityModifyRGB(PyMenu *self,PyObject *args)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}

//// static Menu * create()
PyObject* PyMenu_create(PyMenu *self)
{
    // @see py_Common.h
    // parse args here

    cocos2d::Menu *dr = dynamic_cast<cocos2d::Menu*>(self->ob_body);
    // add your code here

    Py_RETURN_NONE;
}



//=================================================================

PyObject* PyMenu_New(PyTypeObject *type,PyObject *args,PyObject *kwds)
{
    // to parse args and kwds here

    PLOGD("=====PyMenu new Menu");

    PyMenu *self;
    self = (PyMenu*)type->tp_alloc(type, 0);
    if (!self) {
        PyErr_Format(PyExc_RuntimeError,"alloc PyMenu failed!");
        Py_INCREF(Py_None);
        return Py_None;
    }
    // add init your class here
    //self->ob_body = (Menu::getInstance());//dynamic_cast<cocos2d::Ref*>
    PLOGD("PyMenu new Menu %p",self->ob_body);

    return (PyObject*)self;
}

void PyMenu_Dealloc(PyMenu *self)
{
    PLOGD("=====PyMenu Dealloc");
    //add your delete here
    delete self->ob_body;
    self->ob_base.ob_type->tp_free(self);
}

// int PyMenu_Init(PyObject *self,PyObject *args,PyObject *kwds)
// {
//     return 0;
// }

//=================================================================
PyMethodDef PyMenu_methods[] = {
	{"initWithArray",(PyCFunction)PyMenu_initWithArray,METH_VARARGS,""},
	{"onTouchMoved",(PyCFunction)PyMenu_onTouchMoved,METH_VARARGS,""},
	{"alignItemsVertically",(PyCFunction)PyMenu_alignItemsVertically,METH_NOARGS,""},
	{"alignItemsVerticallyWithPadding",(PyCFunction)PyMenu_alignItemsVerticallyWithPadding,METH_VARARGS,""},
	{"alignItemsHorizontally",(PyCFunction)PyMenu_alignItemsHorizontally,METH_NOARGS,""},
	{"alignItemsHorizontallyWithPadding",(PyCFunction)PyMenu_alignItemsHorizontallyWithPadding,METH_VARARGS,""},
	{"alignItemsInColumns",(PyCFunction)PyMenu_alignItemsInColumns,METH_VARARGS,""},
	{"alignItemsInColumns_1",(PyCFunction)PyMenu_alignItemsInColumns_1,METH_VARARGS,""},
	{"alignItemsInColumnsWithArray",(PyCFunction)PyMenu_alignItemsInColumnsWithArray,METH_VARARGS,""},
	{"alignItemsInRows",(PyCFunction)PyMenu_alignItemsInRows,METH_VARARGS,""},
	{"alignItemsInRows_1",(PyCFunction)PyMenu_alignItemsInRows_1,METH_VARARGS,""},
	{"alignItemsInRowsWithArray",(PyCFunction)PyMenu_alignItemsInRowsWithArray,METH_VARARGS,""},
	{"isEnabled",(PyCFunction)PyMenu_isEnabled,METH_NOARGS,""},
	{"setEnabled",(PyCFunction)PyMenu_setEnabled,METH_VARARGS,""},
	{"onTouchBegan",(PyCFunction)PyMenu_onTouchBegan,METH_VARARGS,""},
	{"onTouchEnded",(PyCFunction)PyMenu_onTouchEnded,METH_VARARGS,""},
	{"setOpacityModifyRGB",(PyCFunction)PyMenu_setOpacityModifyRGB,METH_VARARGS,""},
	{"removeChild",(PyCFunction)PyMenu_removeChild,METH_VARARGS,""},
	{"addChild",(PyCFunction)PyMenu_addChild,METH_VARARGS,""},
	{"addChild_1",(PyCFunction)PyMenu_addChild_1,METH_VARARGS,""},
	{"addChild_2",(PyCFunction)PyMenu_addChild_2,METH_VARARGS,""},
	{"addChild_3",(PyCFunction)PyMenu_addChild_3,METH_VARARGS,""},
	{"onEnter",(PyCFunction)PyMenu_onEnter,METH_VARARGS,""},
	{"onExit",(PyCFunction)PyMenu_onExit,METH_VARARGS,""},
	{"createWithItems",(PyCFunction)PyMenu_createWithItems,METH_VARARGS,""},
	{"createWithItem",(PyCFunction)PyMenu_createWithItem,METH_VARARGS,""},
	{"onTouchCancelled",(PyCFunction)PyMenu_onTouchCancelled,METH_VARARGS,""},
	{"getDescription",(PyCFunction)PyMenu_getDescription,METH_VARARGS,""},
	{"createWithArray",(PyCFunction)PyMenu_createWithArray,METH_VARARGS,""},
	{"init",(PyCFunction)PyMenu_init,METH_VARARGS,""},
	{"isOpacityModifyRGB",(PyCFunction)PyMenu_isOpacityModifyRGB,METH_VARARGS,""},
	{"create",(PyCFunction)PyMenu_create,METH_NOARGS,""},
	{NULL,NULL,0,NULL}
};

PyTypeObject PyMenuType = {         \
    PyVarObject_HEAD_INIT(NULL,0)       /* py2: PyObject_HEAD_INIT(NULL) */\
    "CMenu",                       /* tp_name */\
    sizeof(PyMenu),                 /* tp_basicsize */\
    0,                                  /* tp_itemsize */\

    /* Methods to implement standard operations */

    (destructor)(PyMenu_Dealloc),        /* destructor tp_dealloc;*/\
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
    PyMenu_methods,                 /* struct PyMethodDef *tp_methods; */\
    0,                                  /* struct PyMemberDef *tp_members; */\
    0,                                  /* struct PyGetSetDef *tp_getset; */\
    0,                                  /* struct _typeobject *tp_base; */\
    0,                                  /* PyObject *tp_dict; */\
    0,                                  /* descrgetfunc tp_descr_get; */\
    0,                                  /* descrsetfunc tp_descr_set; */\
    0,                                  /* Py_ssize_t tp_dictoffset; */\
    0,                                  /* initproc tp_init; */\
    0,                                  /* allocfunc tp_alloc; */\
    PyMenu_New,                     /* newfunc tp_new; */
};

}
