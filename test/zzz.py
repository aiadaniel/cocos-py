import C_test
import weakref

class PythonTest(C_test.CTest):
    def __init__(self):
        print("pythontest")
        C_test.CTest.__init__(self)

    def CB():
        print "cb"

def Func():
    b=PythonTest()
    b=None
    print "p func"
    return "haha"

a=PythonTest()
a.b=3
a.AddRef(1)
a.DefRef()
c=weakref.proxy(a,a.CB)

print "a=None",a.b
print "a",a
print "c",c
print a==c
a=None
print c