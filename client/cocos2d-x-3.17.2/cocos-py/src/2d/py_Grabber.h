#ifndef PY_CCGrabber_H
#define PY_CCGrabber_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyGrabber
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyGrabber;

extern PyMethodDef PyGrabber_methods[];
extern PyTypeObject PyGrabberType;

}
#endif
