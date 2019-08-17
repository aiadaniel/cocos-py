# LOCAL_PATH := $(call my-dir)

# include $(CLEAR_VARS)
# LOCAL_MODULE := ext_python3.7m
# LOCAL_MODULE_FILENAME := python3.7m
# LOCAL_SRC_FILES := lib/$(TARGET_ARCH_ABI)/libpython3.7m.so
# LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include
# include $(PREBUILT_SHARED_LIBRARY)



#LOCAL_PATH := $(call my-dir)

# include $(CLEAR_VARS)
# LOCAL_MODULE := ext_crystax
# LOCAL_MODULE_FILENAME := crystax
# LOCAL_SRC_FILES := lib/$(TARGET_ARCH_ABI)/libcrystax.so
# LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include
# include $(PREBUILT_SHARED_LIBRARY)


##以下使用静态库
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := ext_python3.7m
LOCAL_MODULE_FILENAME := python3.7m
LOCAL_SRC_FILES := lib/$(TARGET_ARCH_ABI)/libpython3.7m.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include
include $(PREBUILT_STATIC_LIBRARY)


#LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := ext_crystax
LOCAL_MODULE_FILENAME := crystax
LOCAL_SRC_FILES := lib/$(TARGET_ARCH_ABI)/libcrystax.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include
include $(PREBUILT_STATIC_LIBRARY)