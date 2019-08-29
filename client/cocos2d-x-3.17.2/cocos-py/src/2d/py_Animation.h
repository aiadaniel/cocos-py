#ifndef PY_CCAnimation_H
#define PY_CCAnimation_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyAnimation
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyAnimation;

extern PyMethodDef PyAnimation_methods[];
extern PyTypeObject PyAnimationType;

}
#endif
