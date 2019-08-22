/****************************************************************************
 Copyright (c) 2010-2013 cocos2d-x.org
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
package org.cocos2dx.lib;

import android.app.Activity;
import android.app.KeyguardManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.graphics.PixelFormat;
import android.media.AudioManager;
import android.opengl.GLSurfaceView;
import android.os.AsyncTask;
import android.os.Build;
import android.os.Bundle;
import android.os.Message;
import android.os.PowerManager;
import android.preference.PreferenceManager.OnActivityResultListener;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;

import org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;

import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLDisplay;

public abstract class Cocos2dxActivity extends Activity implements Cocos2dxHelperListener {
    // ===========================================================
    // Constants
    // ===========================================================

    private final static String TAG = Cocos2dxActivity.class.getSimpleName();

    // ===========================================================
    // Fields
    // ===========================================================

    private Cocos2dxGLSurfaceView mGLSurfaceView = null;
    private int[] mGLContextAttrs = null;
    private Cocos2dxHandler mHandler = null;
    private static Cocos2dxActivity sContext = null;
    private Cocos2dxVideoHelper mVideoHelper = null;
    private Cocos2dxWebViewHelper mWebViewHelper = null;
    private Cocos2dxEditBoxHelper mEditBoxHelper = null;
    private boolean hasFocus = false;
    private boolean showVirtualButton = false;
    private boolean gainAudioFocus = false;
    private boolean paused = true;

    public Cocos2dxGLSurfaceView getGLSurfaceView() {
        return mGLSurfaceView;
    }

    public static Context getContext() {
        return sContext;
    }

    public void setKeepScreenOn(boolean value) {
        final boolean newValue = value;
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                mGLSurfaceView.setKeepScreenOn(newValue);
            }
        });
    }

    public void setEnableVirtualButton(boolean value) {
        this.showVirtualButton = value;
    }

    public void setEnableAudioFocusGain(boolean value) {
        if (gainAudioFocus != value) {
            if (!paused) {
                if (value)
                    Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
                else
                    Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
            }
            gainAudioFocus = value;
        }
    }

    protected void onLoadNativeLibraries(String libName) {
        try {
            ApplicationInfo ai = getPackageManager().getApplicationInfo(getPackageName(), PackageManager.GET_META_DATA);
            Bundle bundle = ai.metaData;
            if (libName == null) {
                libName = bundle.getString("android.app.lib_name");
                Log.d(TAG, "==load lib: " + libName);
            }
            System.loadLibrary(libName);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // ===========================================================
    // Constructors
    // ===========================================================

    @Override
    protected void onCreate(final Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Workaround in https://stackoverflow.com/questions/16283079/re-launch-of-activity-on-home-button-but-only-the-first-time/16447508
        if (!isTaskRoot()) {
            // Android launched another instance of the root activity into an existing task
            //  so just quietly finish and go away, dropping the user back into the activity
            //  at the top of the stack (ie: the last state of this task)
            finish();
            Log.w(TAG, "[Workaround] Ignore the activity started from icon!");
            return;
        }

        this.hideVirtualButton();

        onLoadNativeLibraries(null);
        onLoadNativeLibraries("python3.7m");//?

        //lxm add
        final File appFile = getFilesDir();  /*-- /data/data/packageName/files --*/
        final String appLib = getApplicationInfo().nativeLibraryDir;
        Log.d(TAG, "=====appFile: " + appFile.getAbsolutePath() + "    & appLib:" + appLib + "=====");
        // appFile: /data/user/0/org.cocos2dx.cpp_tests/files
        // appLib:/data/app/org.cocos2dx.cpp_tests-jQQA-czDIh2HcWaGK4SMtw==/lib/arm
//        printFiles(appFile);
//        File appLibFile = new File(appLib);
//        printFiles(appLibFile);

        sContext = this;
        this.mHandler = new Cocos2dxHandler(this);

        Cocos2dxHelper.init(this);//这里面初始化assets参数
        Log.d(TAG, "Cocos2dxHelper init");

        this.mGLContextAttrs = getGLContextAttrs();
        this.init();

        AsyncTask.execute(new Runnable() {

            @Override
            public void run() {
                loadPy(appFile, appLib);
                //lxm add 等待init完成在开启
                initPythonPath(appFile.getAbsolutePath(), appLib);//startup pycocos
            }
        });

        if (mVideoHelper == null) {
            mVideoHelper = new Cocos2dxVideoHelper(this, mFrameLayout);
        }

        if (mWebViewHelper == null) {
            mWebViewHelper = new Cocos2dxWebViewHelper(mFrameLayout);
        }

        if (mEditBoxHelper == null) {
            mEditBoxHelper = new Cocos2dxEditBoxHelper(mFrameLayout);
        }

        Window window = this.getWindow();
        window.setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_ADJUST_PAN);

        // Audio configuration
        this.setVolumeControlStream(AudioManager.STREAM_MUSIC);
    }

    void printFiles(File file) {
        if (file != null && file.exists()) {
            if (!file.isDirectory()) {
                Log.d(TAG, file.getAbsolutePath());
            } else {
                File[] childs = file.listFiles();
                for (File item : childs)
                    printFiles(item);
            }
        }
    }

    void loadPy(File appFile, String appLib) {
        //拷贝Python相关环境
        String pyzipName = "python3.7m.MP3";
        String soPathPrefix = "pylib-dynload" + File.separator;
        File pythonLibFile = new File(appFile, pyzipName);

        String[] sos = new String[0];
        String[] scripts = new String[0];
        try {
            sos = getAssets().list("pylib-dynload");
//            sos = new String[]{
//                    "_struct.cpython-37m.so",
//                    "binascii.cpython-37m.so",
//                    //"time.cpython-37m.so",
//                    "zlib.cpython-37m.so"};
            //Log.d(TAG,"=====sos: " + Arrays.toString(sos));
            //if (!pythonLibFile.exists()) {
                copyFile(this, pyzipName,"");
                for (String item : sos) {
                    copyFile(this, item, soPathPrefix);
                }
            //}

                scripts = getAssets().list("pyscripts");
                for (String item: scripts) {
                    copyFile(this, item, "pyscripts"+File.separator);
                }
        } catch (IOException e) {
            e.printStackTrace();
        }



        // 拷贝Python 代码，放在assets目录的
        //copyFile(this, "calljava.py");
        //copyFile(this, "test.py");

        try {
            // 加载Python解释器（当前在cocos2d内部引用会自动加载？）
            //System.load(appLib + File.separator + "libpython3.7m.so");

            for (String item : sos) {
                System.load(appFile.getAbsolutePath() + File.separator + soPathPrefix + item);
            }

            // 除了将代码直接拷贝，还支持将代码压缩为zip包，通过Install方法解压到指定路径
            //InputStream dataSource = getAssets().open("py_code.zip");
            //StarCoreFactoryPath.Install(dataSource, appFile.getPath(),true );

            //TODO python的sys.path.insert支持直接使用zip文件，无须解压；这里解压自己的代码
            // 此处先尝试把python脚本解压到/data/data/.../files文件夹
            // 由于assets文件大小限制，出现压缩包仅有部分被解压，应该是安装包大小超过50m分包的缘故
            InputStream dataSource = new FileInputStream(pythonLibFile);//getAssets().open("python3.7m.MP3");
            Log.d(TAG, "=====libpython size: " + dataSource.available());
            // 由于异步解压加载的原因，这里尚未解压完成，底层python开始调用出现找不到的问题
            ZipUtils.Install(dataSource, appFile.getAbsolutePath(), true);
        } catch (Exception e) {
            e.printStackTrace();
        }

        /*----init starcore----*/
//		StarCoreFactoryPath.StarCoreCoreLibraryPath = appLib;
//		StarCoreFactoryPath.StarCoreShareLibraryPath = appLib;
//		StarCoreFactoryPath.StarCoreOperationPath = appFile.getPath();
//
//		StarCoreFactory starcore = StarCoreFactory.GetFactory();
//		StarServiceClass Service = starcore._InitSimple("test", "123", 0, 0);
//		SrvGroup = (StarSrvGroupClass) Service._Get("_ServiceGroup");
//		Service._CheckPassword(false);
//
//		//----run python code----
//		SrvGroup._InitRaw("python37", Service);
//		StarObjectClass python = Service._ImportRawContext("python", "", false, "");
//		// 设置Python模块加载路径
//		python._Call("import", "sys");
//		StarObjectClass pythonSys = python._GetObject("sys");
//		StarObjectClass pythonPath = (StarObjectClass) pythonSys._Get("path");
//		pythonPath._Call("insert", 0, appFile.getPath()+ File.separator +"python3.4.zip");
//		pythonPath._Call("insert", 0, appLib);
//		pythonPath._Call("insert", 0, appFile.getPath());
//
//        //调用Python代码
//		Service._DoFile("python", appFile.getPath() + "/py_code.py", "");
//		long time = python._Calllong("get_time");
//		Log.d("", "form python time="+time);
//
//		Service._DoFile("python", appFile.getPath() + "/test.py", "");
//		int result = python._Callint("add", 5, 2);
//		Log.d("", "result="+result);
//
//		python._Set("JavaClass", Log.class);
//		Service._DoFile("python", appFile.getPath() + "/calljava.py", "");
    }

    private void copyFile(Context c, String Name, String prefix) {
        File outfile = null;
        if ("".equals(prefix)) {
            outfile = new File(c.getFilesDir(), Name);
        } else {
            String dir = c.getFilesDir().getAbsolutePath()+File.separator + prefix;
            File dirFile = new File(dir);
            dirFile.mkdir();
            outfile = new File(dir + Name);
        }
        Log.d(TAG, "=====copy file: " + outfile.getAbsolutePath());
        BufferedOutputStream outStream = null;
        BufferedInputStream inStream = null;

        try {
            outStream = new BufferedOutputStream(new FileOutputStream(outfile));
            InputStream is = c.getAssets().open(prefix+Name);
            Log.e(TAG,"=====so size " + is.available());
            inStream = new BufferedInputStream(is);

            byte[] buffer = new byte[1024 * 10];
            int readLen = 0;
            while ((readLen = inStream.read(buffer)) != -1) {
                outStream.write(buffer, 0, readLen);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                if (inStream != null) inStream.close();
                if (outStream != null) outStream.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    private static native void initPythonPath(String appFile, String appLib);

    //native method,call GLViewImpl::getGLContextAttrs() to get the OpenGL ES context attributions
    private static native int[] getGLContextAttrs();

    // ===========================================================
    // Getter & Setter
    // ===========================================================

    // ===========================================================
    // Methods for/from SuperClass/Interfaces
    // ===========================================================

    @Override
    protected void onResume() {
        Log.d(TAG, "onResume()");
        paused = false;
        super.onResume();
        if (gainAudioFocus)
            Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
        this.hideVirtualButton();
        resumeIfHasFocus();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        Log.d(TAG, "onWindowFocusChanged() hasFocus=" + hasFocus);
        super.onWindowFocusChanged(hasFocus);

        this.hasFocus = hasFocus;
        resumeIfHasFocus();
    }

    private void resumeIfHasFocus() {
        //It is possible for the app to receive the onWindowsFocusChanged(true) event
        //even though it is locked or asleep
        boolean readyToPlay = !isDeviceLocked() && !isDeviceAsleep();

        if (hasFocus && readyToPlay) {
            this.hideVirtualButton();
            Cocos2dxHelper.onResume();
            mGLSurfaceView.onResume();
        }
    }

    @Override
    protected void onPause() {
        Log.d(TAG, "onPause()");
        paused = true;
        super.onPause();
        if (gainAudioFocus)
            Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
        Cocos2dxHelper.onPause();
        mGLSurfaceView.onPause();
    }

    @Override
    protected void onDestroy() {
        if (gainAudioFocus)
            Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
        super.onDestroy();
    }

    @Override
    public void showDialog(final String pTitle, final String pMessage) {
        Message msg = new Message();
        msg.what = Cocos2dxHandler.HANDLER_SHOW_DIALOG;
        msg.obj = new Cocos2dxHandler.DialogMessage(pTitle, pMessage);
        this.mHandler.sendMessage(msg);
    }

    @Override
    public void runOnGLThread(final Runnable pRunnable) {
        this.mGLSurfaceView.queueEvent(pRunnable);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        for (OnActivityResultListener listener : Cocos2dxHelper.getOnActivityResultListeners()) {
            listener.onActivityResult(requestCode, resultCode, data);
        }

        super.onActivityResult(requestCode, resultCode, data);
    }


    protected ResizeLayout mFrameLayout = null;

    // ===========================================================
    // Methods
    // ===========================================================
    public void init() {

        // FrameLayout
        ViewGroup.LayoutParams framelayout_params =
                new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT,
                        ViewGroup.LayoutParams.MATCH_PARENT);

        mFrameLayout = new ResizeLayout(this);

        mFrameLayout.setLayoutParams(framelayout_params);

        // Cocos2dxEditText layout
        ViewGroup.LayoutParams edittext_layout_params =
                new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT,
                        ViewGroup.LayoutParams.WRAP_CONTENT);
        Cocos2dxEditBox edittext = new Cocos2dxEditBox(this);
        edittext.setLayoutParams(edittext_layout_params);


        mFrameLayout.addView(edittext);

        // Cocos2dxGLSurfaceView
        this.mGLSurfaceView = this.onCreateView();
        this.mGLSurfaceView.setPreserveEGLContextOnPause(true);

        // ...add to FrameLayout
        mFrameLayout.addView(this.mGLSurfaceView);

        // Switch to supported OpenGL (ARGB888) mode on emulator
        // this line dows not needed on new emulators and also it breaks stencil buffer
        //if (isAndroidEmulator())
        //   this.mGLSurfaceView.setEGLConfigChooser(8, 8, 8, 8, 16, 0);

        // render 完成触发appdelegate的回调
        Log.d(TAG, "Cocos2dxRenderer starting");
        this.mGLSurfaceView.setCocos2dxRenderer(new Cocos2dxRenderer());
        Log.d(TAG, "Cocos2dxRenderer finished");
        this.mGLSurfaceView.setCocos2dxEditText(edittext);

        // Set framelayout as the content view
        setContentView(mFrameLayout);
    }


    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView glSurfaceView = new Cocos2dxGLSurfaceView(this);
        //this line is need on some device if we specify an alpha bits
        if (this.mGLContextAttrs[3] > 0)
            glSurfaceView.getHolder().setFormat(PixelFormat.TRANSLUCENT);

        // use custom EGLConfigureChooser
        Cocos2dxEGLConfigChooser chooser = new Cocos2dxEGLConfigChooser(this.mGLContextAttrs);
        glSurfaceView.setEGLConfigChooser(chooser);

        return glSurfaceView;
    }

    protected void hideVirtualButton() {
        if (showVirtualButton) {
            return;
        }

        if (Build.VERSION.SDK_INT >= 19) {
            // use reflection to remove dependence of API level

            Class viewClass = View.class;

            try {
                final int SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION");
                final int SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN");
                final int SYSTEM_UI_FLAG_HIDE_NAVIGATION = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_HIDE_NAVIGATION");
                final int SYSTEM_UI_FLAG_FULLSCREEN = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_FULLSCREEN");
                final int SYSTEM_UI_FLAG_IMMERSIVE_STICKY = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY");
                final int SYSTEM_UI_FLAG_LAYOUT_STABLE = Cocos2dxReflectionHelper.<Integer>getConstantValue(viewClass, "SYSTEM_UI_FLAG_LAYOUT_STABLE");

                // getWindow().getDecorView().setSystemUiVisibility();
                final Object[] parameters = new Object[]{SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                        | SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                        | SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
                        | SYSTEM_UI_FLAG_FULLSCREEN // hide status bar
                        | SYSTEM_UI_FLAG_IMMERSIVE_STICKY};
                Cocos2dxReflectionHelper.<Void>invokeInstanceMethod(getWindow().getDecorView(),
                        "setSystemUiVisibility",
                        new Class[]{Integer.TYPE},
                        parameters);
            } catch (NullPointerException e) {
                Log.e(TAG, "hideVirtualButton", e);
            }
        }
    }

    private static boolean isAndroidEmulator() {
        String model = Build.MODEL;
        Log.d(TAG, "model=" + model);
        String product = Build.PRODUCT;
        Log.d(TAG, "product=" + product);
        boolean isEmulator = false;
        if (product != null) {
            isEmulator = product.equals("sdk") || product.contains("_sdk") || product.contains("sdk_");
        }
        Log.d(TAG, "isEmulator=" + isEmulator);
        return isEmulator;
    }

    private static boolean isDeviceLocked() {
        KeyguardManager keyguardManager = (KeyguardManager) getContext().getSystemService(Context.KEYGUARD_SERVICE);
        boolean locked = keyguardManager.inKeyguardRestrictedInputMode();
        return locked;
    }

    private static boolean isDeviceAsleep() {
        PowerManager powerManager = (PowerManager) getContext().getSystemService(Context.POWER_SERVICE);
        if (powerManager == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT_WATCH) {
            return !powerManager.isInteractive();
        } else {
            return !powerManager.isScreenOn();
        }
    }

    // ===========================================================
    // Inner and Anonymous Classes
    // ===========================================================

    private class Cocos2dxEGLConfigChooser implements GLSurfaceView.EGLConfigChooser {
        private int[] mConfigAttributes;
        private final int EGL_OPENGL_ES2_BIT = 0x04;
        private final int EGL_OPENGL_ES3_BIT = 0x40;

        public Cocos2dxEGLConfigChooser(int redSize, int greenSize, int blueSize, int alphaSize, int depthSize, int stencilSize, int multisamplingCount) {
            mConfigAttributes = new int[]{redSize, greenSize, blueSize, alphaSize, depthSize, stencilSize, multisamplingCount};
        }

        public Cocos2dxEGLConfigChooser(int[] attributes) {
            mConfigAttributes = attributes;
        }

        @Override
        public EGLConfig chooseConfig(EGL10 egl, EGLDisplay display) {
            int[][] EGLAttributes = {
                    {
                            // GL ES 2 with user set
                            EGL10.EGL_RED_SIZE, mConfigAttributes[0],
                            EGL10.EGL_GREEN_SIZE, mConfigAttributes[1],
                            EGL10.EGL_BLUE_SIZE, mConfigAttributes[2],
                            EGL10.EGL_ALPHA_SIZE, mConfigAttributes[3],
                            EGL10.EGL_DEPTH_SIZE, mConfigAttributes[4],
                            EGL10.EGL_STENCIL_SIZE, mConfigAttributes[5],
                            EGL10.EGL_SAMPLE_BUFFERS, (mConfigAttributes[6] > 0) ? 1 : 0,
                            EGL10.EGL_SAMPLES, mConfigAttributes[6],
                            EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
                            EGL10.EGL_NONE
                    },
                    {
                            // GL ES 2 with user set 16 bit depth buffer
                            EGL10.EGL_RED_SIZE, mConfigAttributes[0],
                            EGL10.EGL_GREEN_SIZE, mConfigAttributes[1],
                            EGL10.EGL_BLUE_SIZE, mConfigAttributes[2],
                            EGL10.EGL_ALPHA_SIZE, mConfigAttributes[3],
                            EGL10.EGL_DEPTH_SIZE, mConfigAttributes[4] >= 24 ? 16 : mConfigAttributes[4],
                            EGL10.EGL_STENCIL_SIZE, mConfigAttributes[5],
                            EGL10.EGL_SAMPLE_BUFFERS, (mConfigAttributes[6] > 0) ? 1 : 0,
                            EGL10.EGL_SAMPLES, mConfigAttributes[6],
                            EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
                            EGL10.EGL_NONE
                    },
                    {
                            // GL ES 2 with user set 16 bit depth buffer without multisampling
                            EGL10.EGL_RED_SIZE, mConfigAttributes[0],
                            EGL10.EGL_GREEN_SIZE, mConfigAttributes[1],
                            EGL10.EGL_BLUE_SIZE, mConfigAttributes[2],
                            EGL10.EGL_ALPHA_SIZE, mConfigAttributes[3],
                            EGL10.EGL_DEPTH_SIZE, mConfigAttributes[4] >= 24 ? 16 : mConfigAttributes[4],
                            EGL10.EGL_STENCIL_SIZE, mConfigAttributes[5],
                            EGL10.EGL_SAMPLE_BUFFERS, 0,
                            EGL10.EGL_SAMPLES, 0,
                            EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
                            EGL10.EGL_NONE
                    },
                    {
                            // GL ES 2 by default
                            EGL10.EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
                            EGL10.EGL_NONE
                    }
            };

            EGLConfig result = null;
            for (int[] eglAtribute : EGLAttributes) {
                result = this.doChooseConfig(egl, display, eglAtribute);
                if (result != null)
                    return result;
            }

            Log.e(DEVICE_POLICY_SERVICE, "Can not select an EGLConfig for rendering.");
            return null;
        }

        private EGLConfig doChooseConfig(EGL10 egl, EGLDisplay display, int[] attributes) {
            EGLConfig[] configs = new EGLConfig[1];
            int[] matchedConfigNum = new int[1];
            boolean result = egl.eglChooseConfig(display, attributes, configs, 1, matchedConfigNum);
            if (result && matchedConfigNum[0] > 0) {
                return configs[0];
            }
            return null;
        }
    }
}
