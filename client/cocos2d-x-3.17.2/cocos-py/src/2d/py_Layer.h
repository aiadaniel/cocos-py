#ifndef PY_CCLayer_H
#define PY_CCLayer_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyLayer
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyLayer;

extern PyMethodDef PyLayer_methods[];
extern PyTypeObject PyLayerType;

}
#endif
