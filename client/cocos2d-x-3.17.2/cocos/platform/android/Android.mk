LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ccandroid

LOCAL_MODULE_FILENAME := libccandroid

LOCAL_SRC_FILES := \
CCApplication-android.cpp \
CCCommon-android.cpp \
CCDevice-android.cpp \
CCGLViewImpl-android.cpp \
CCFileUtils-android.cpp \
javaactivity-android.cpp \
CCEnhanceAPI-android.cpp \
jni/Java_org_cocos2dx_lib_Cocos2dxAccelerometer.cpp \
jni/Java_org_cocos2dx_lib_Cocos2dxBitmap.cpp \
jni/Java_org_cocos2dx_lib_Cocos2dxHelper.cpp \
jni/Java_org_cocos2dx_lib_Cocos2dxRenderer.cpp \
jni/JniHelper.cpp \
jni/TouchesJni.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/.. \
                    $(LOCAL_PATH)/../.. \
                    $(LOCAL_PATH)/../../../cocos-py/src

LOCAL_EXPORT_LDLIBS := -lGLESv2 \
                       -lEGL \
                       -llog \
                       -landroid

# LOCAL_STATIC_LIBRARIES := py_cocos

include $(BUILD_STATIC_LIBRARY)

# $(call import-module, cocos-py/src)
