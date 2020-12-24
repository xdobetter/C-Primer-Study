#include <iostream>
#include "A.hpp"
A::A()
{
    this->a = 100;
}
int A::geta()
{
    return a;
}
void A::handle()
{
    std::cout << "in A,object_b.b=" << object_b.getb() << std::endl;
}