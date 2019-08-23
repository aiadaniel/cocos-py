import pycocos2d
import time

SUCCESS = pycocos2d.PYSUCCESS
FAIL = pycocos2d.PYFAIL

def bootstrap():
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("**********************************************")
    print("***********boostrap in python main************")
    pycocos2d.PyDirector.holder()
    pycocos2d.PyDirector.setDisplayStats(False)
    print("***** success: %d  fail:%d" % (SUCCESS,FAIL))
    while 1:
        process()

def process():
    print("******************looping on python*********************")
    # 暂时休眠防卡死
    time.sleep(0.01)
    pass