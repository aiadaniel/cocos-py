#ifndef PY_CCDIRECTOR_H
#define PY_CCDIRECTOR_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyDirector
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyDirector;

extern PyMethodDef PyDirector_methods[];
extern PyTypeObject PyDirectorType;

}


#endif