import pycocos2d
import time

SUCCESS = pycocos2d.PYSUCCESS
FAIL = pycocos2d.PYFAIL


def applicationDidFinishLaunching():
    cdirector = pycocos2d.CDirector()
    cdirector.setDisplayStats(False)













def bootstrap():
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("***********boostrap in python main************")
    cdirector = pycocos2d.CDirector()
    cdirector.setDisplayStats(False)
    print("***** success: %d  fail:%d" % (SUCCESS,FAIL))
    cdirector.holder()
    while 1:
        process()

def process():
    print("******************looping on python*********************")
    # 暂时休眠防卡死
    time.sleep(1)
    pass
