#ifndef PY_CCLabel_H
#define PY_CCLabel_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyLabel
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyLabel;

extern PyMethodDef PyLabel_methods[];
extern PyTypeObject PyLabelType;

}
#endif
