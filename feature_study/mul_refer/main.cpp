#include <iostream>
#include "A.hpp"
//#include "B.hpp" //因为A.h里面已经包含B.h，所以不需要导入B.h了

int main()
{
    A a;
    a.handle();
    B b;
    b.handle();
    return 0;
}