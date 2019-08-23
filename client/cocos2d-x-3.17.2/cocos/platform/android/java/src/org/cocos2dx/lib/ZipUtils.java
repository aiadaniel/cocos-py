package org.cocos2dx.lib;

import android.util.Log;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

public class ZipUtils {

    private static final String TAG = "cocos";

    public static boolean CreatePath(Runtime paramRuntime, String paramString) {
        File localFile = new File(paramString);
        if (!localFile.exists()) {
            localFile.mkdirs();
            try {
                Process localProcess = Runtime.getRuntime().exec("chmod 777 " + localFile);
                int i = localProcess.waitFor();
                if (i != 0) {
                    localFile.delete();
                    return false;
                }
                return true;
            } catch (Exception localException) {
                localFile.delete();
                return false;
            }
        }
        return true;
    }

    public static boolean CreatePath(String paramString) {
        File localFile = new File(paramString);
        if (!localFile.exists()) {
            int i = paramString.lastIndexOf(File.separator.charAt(0));
            if (i < 0) {
                if (!localFile.mkdirs()) {
                    return false;
                }
            } else {
                String str = paramString.substring(0, i);
                if (!CreatePath(str)) {
                    return false;
                }
                if (!localFile.mkdirs()) {
                    return false;
                }
            }
        }
        return true;
    }

    private static boolean unzip(InputStream paramInputStream, String paramString, Boolean paramBoolean) {
        try {
            ZipInputStream localZipInputStream = new ZipInputStream(paramInputStream);
            ZipEntry localZipEntry = localZipInputStream.getNextEntry();
            byte[] arrayOfByte = new byte[1024];
            File localFile = new File(paramString);
            localFile.mkdir();
            while (localZipEntry != null) {
                String str;
                if (localZipEntry.isDirectory()) {
                    str = localZipEntry.getName();
                    str = str.substring(0, str.length() - 1);
                    String tempPath = paramString + File.separator + str;
                    if (!CreatePath(tempPath)) {
                        Log.e(TAG,"=====create path failed: " + tempPath);
                        return false;
                    }
                    //Log.d(TAG,"=====isDirectory: " + str);
                } else {
                    str = paramString + File.separator + localZipEntry.getName();
                    //Log.d(TAG,"=====isFile: " + str);
                    int i = str.lastIndexOf(File.separator.charAt(0));
                    Object localObject;
                    if (i < 0) {
                        localFile = new File(paramString + File.separator + localZipEntry.getName());
                    } else {
                        localObject = str.substring(0, i);
                        if (!CreatePath((String) localObject)) {
                            Log.e(TAG,"=====create path failed2: " + localObject);
                            return false;
                        }
                        localFile = new File(paramString + File.separator + localZipEntry.getName());
                    }
                    if ((!localFile.exists()) || (paramBoolean.booleanValue() == true)) {
                        //Log.d(TAG,"=====create file: " + localFile.getAbsolutePath());
                        localFile.createNewFile();
                        localObject = new FileOutputStream(localFile);
                        int j = 0;
                        while ((j = localZipInputStream.read(arrayOfByte)) != -1) {
                            ((FileOutputStream) localObject).write(arrayOfByte, 0, j);
                        }
                        ((FileOutputStream) localObject).close();
                    }
                }
                localZipEntry = localZipInputStream.getNextEntry();
            }//end while
            localZipInputStream.close();
            return true;
        } catch (FileNotFoundException localFileNotFoundException) {
            localFileNotFoundException.printStackTrace();
            return false;
        } catch (IOException localIOException) {
            localIOException.printStackTrace();
        }
        return false;
    }

    public static boolean Install(InputStream paramInputStream, String paramString, Boolean paramBoolean) {
        return unzip(paramInputStream, paramString, paramBoolean);
    }

    public static void InitDefault(Runtime paramRuntime, String paramString) {
        CreatePath(paramRuntime, paramString + "/files/srplab");
        CreatePath(paramRuntime, paramString + "/files/sdcard");
    }
}
