# cocos-py
wrap cocos2d-x with python

修改记录：
cocos根目录下增加cocos-py封装python，其中python编译参考工程git@github.com:aiadaniel/python-mobile.git
--由于当前交叉编译python3.7.4未能成功运行运行在设备，Py_Initialize()后崩溃，日志如
\#01 pc 0001c7b3  /data/app/org.cocos2dx.cpp_tests-pK0RHaFplAiOPoH3BxHg-Q==/lib/arm/libcrystax.so (abort+26)

--当前优先采用CLE的工具里面自带的python3.7.0编译库(http://www.srplab.com/cn/files/products.html)，后续继续上述交叉编译尝试





#关于python交叉编译参考
--1.（当前推荐方法）参考github QPython编译过程 https://github.com/yan12125/python3-android 

--2.python3.6移植： https://blog.csdn.net/whahu1989/article/details/86482669

--3.采用类似公共语言扩展CLE的方案，也是crystax-ndk：https://blog.csdn.net/yingshukun/article/details/78571992 （依赖CLE第三方startcore等库）

--4.3.7.1移植： http://blog.sina.com.cn/s/blog_67119e9a0102y31t.html