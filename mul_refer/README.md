## 这是一个理解C++中两个类互相引用的Demo
这个Demo参考自[C++中两个类互相引用的解决方法](https://blog.csdn.net/xiqingnian/article/details/41214539?utm_medium=distribute.pc_relevant.none-task-blog-OPENSEARCH-9.control&depth_1-utm_source=distribute.pc_relevant.none-task-blog-OPENSEARCH-9.control)
我照着这个Demo敲完了完整的代码，其中有一些细节想说一下：

-  B.h 中 前置类申明用 class A 就好， extern 只能申明函数和变量
-  #endif //_A

在这个Demo中我还用到了CMake的技术
项目编译方法如下:
```
cmake .
```

```
cmake --build .         //将直接编译出可执行文件
```