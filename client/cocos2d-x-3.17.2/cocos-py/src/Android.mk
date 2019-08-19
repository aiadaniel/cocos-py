LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := py_cocos

LOCAL_MODULE_FILENAME := libpy_cocos

LOCAL_SRC_FILES := \
py_CCDirector.cpp \
py_Cocos2d.cpp


LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/../python3.7.4/include \
					$(LOCAL_PATH)/../../cocos

LOCAL_STATIC_LIBRARIES := cc_static

# LOCAL_STATIC_LIBRARIES := ext_python3.7m
# #LOCAL_STATIC_LIBRARIES += ext_crystax

LOCAL_SHARED_LIBRARIES := python3.7m
LOCAL_SHARED_LIBRARIES += crystax

include $(BUILD_STATIC_LIBRARY)

$(call import-module, cocos)
$(call import-module, python3.7.4)
