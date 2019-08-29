#ifndef PY_CCSprite_H
#define PY_CCSprite_H

#include "py_Common.h"

namespace py_cocos2d
{

typedef struct PySprite
{
    PyObject_HEAD
    cocos2d::Ref    *ob_body;
}PySprite;

extern PyMethodDef PySprite_methods[];
extern PyTypeObject PySpriteType;

}
#endif
