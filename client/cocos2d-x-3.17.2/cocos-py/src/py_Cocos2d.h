#ifndef PY_COCOS2D_H
#define PY_COCOS2D_H

#include "py_Tracelog.h"

namespace py_cocos2d
{
void pyApplicationDidFinishLaunching();
void setScriptPath(const char *appFile, const char *appLib);
void startup(); 

}

#endif