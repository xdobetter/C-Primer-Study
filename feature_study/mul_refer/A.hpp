#ifndef _A
#define _A
#include "B.hpp" //A的头文件导入了B的头文件
class A
{
private:
    int a;
    B object_b; //A的头文件导入了B的头文件，在调用B的时候就可以不用指针
public:
    A();
    int geta();
    void handle();
};
#endif //_A
