#ifndef PY_TRACELOG_H
#define PY_TRACELOG_H


#ifndef PY_DEBUG
#define PY_DEBUG    1
#endif

#ifdef ANDROID
#include <android/log.h>
#include <string.h>
#define LOGTAG "[cocos2d-py]"  
#define LOG_LEVEL 5 //置零关闭所有日志

#if LOG_LEVEL > 3
#define PLOGD(format,args...) \
    __android_log_print(ANDROID_LOG_DEBUG, LOGTAG, "[%.10s(%03d)]:=====" format"\n",__FILE__+strlen(__FILE__)-10,__LINE__, ##args);
#else
#define PLOGD(format,args...)
#endif

//总写，目前写法通不过
// #define LOG(format,args...) \
//     #ifdef PY_DEBUG  \
//     LOGD(format,args)   \
//     #endif

#endif




#endif