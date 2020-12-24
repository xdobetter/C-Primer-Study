#ifndef _B
#define _B
//#include "A.h"//B的头文件没有导入A的头文件，需要有三个地方需要注意

class A; //注意1,需要声明A

class B
{
private:
    int b;
    A *object_a; //注意2：调用A的时候需要指针
public:
    B();
    int getb();
    void handle();
};

#endif //_B