#ifndef PY_CCScene_H
#define PY_CCScene_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PyScene
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PyScene;

extern PyMethodDef PyScene_methods[];
extern PyTypeObject PySceneType;

}
#endif
