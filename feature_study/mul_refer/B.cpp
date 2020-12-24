#include <iostream>
#include "B.hpp"
#include "A.hpp" //注意3：在B.cpp里面导入A的头文件
B::B()
{
    this->b = 200;
}
int B::getb()
{
    return b;
}
void B::handle()
{
    object_a = new A();
    std::cout << "in B,object_a->a=" << object_a->geta() << std::endl;
}