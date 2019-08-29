#ifndef PY_CCMenu_H
#define PY_CCMenu_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyMenu
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyMenu;

extern PyMethodDef PyMenu_methods[];
extern PyTypeObject PyMenuType;

}
#endif
