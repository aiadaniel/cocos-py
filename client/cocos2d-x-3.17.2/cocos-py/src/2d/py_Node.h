#ifndef PY_CCNode_H
#define PY_CCNode_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyNode
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyNode;

extern PyMethodDef PyNode_methods[];
extern PyTypeObject PyNodeType;

}
#endif
