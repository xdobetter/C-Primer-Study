#include <iostream>

double f()
{

}

int main()
{
    //int i = 42;
    //int j = 10;
    //int *p=&j;//指针初始指向i
    // std::cout<<*p<<std::endl;
    // p=&j;//修改指针值
    // std::cout<<*p<<std::endl;
    // *p=20;//修改指针所指对象的值
    // std::cout<<*p<<std::endl;
    // *p=*p**p;
    // std::cout<<*p<<std::endl;
    // std::cout<<j<<std::endl;
    //double *dp=&i;//"int *" 类型的值不能用于初始化 "double *" 类型的实体C/C++(144)
    //int *ip=i;//"int" 类型的值不能用于初始化 "int *" 类型的实体C/C++(144)
    //int *p=&i;//合法
    // void *p = &i;                 //void*类型指针可以存放任意对象的地址
    // long *lp = &i;                //"int *" 类型的值不能用于初始化 "long *" 类型的实体C/C++(144)
    // std::cout << *p << std::endl; //表达式必须是指向完整对象类型的指针C/C++(852)

    // int *p=&i;//p是一个int型指针
    // int *&r=p;//r是对p的一个引用
    // std::cout<<"*r"<<*r<<std::endl;
    // r=&j;//修改p的指向
    // std::cout<<"*r"<<*r<<std::endl;
    // *r=10;//修改p所指对象的值
    // std::cout<<"*r"<<*r<<std::endl;
    // //double &r2=i;//无法用 "int" 类型的值初始化 "double &" 类型的引用(非常量限定)C/C++(434)
    //int &r2=0;//非常量引用的初始值必须为左值C/C++(461)

    //int *p2=1;//"int" 类型的值不能用于初始化 "int *" 类型的实体C/C++(144)

    //std::cout<<"p2:"<<*p2<<std::endl;
    //const int k;

    //ex2.27
    // int i=-1;
    // const int &const r3;//不合法，未进行初始化
    // const int &const r2=i; //合法，r2和下面的r一样，都是常量引用（最右边的const可以去掉）
    // const int i2=i,&r=i;   //合法，对整型常量i2初始化；对常量引用r初始化
    //ex2.28
    //int i=5,*const cp;
    // int j=10;
    // cp=&j;

    //int *p1,*const p2;
    //const int ic=5,&r=ic;

    //const int *p;

    //ex2.29
    // const int ic=5;
    // const int *const p3=&ic; 
    // int *p1,*const p2=p1;
    // int i=5;
    // const int v2=0;
    // int v1=v2;
    // int *p1=&v1,&r1=v1;
    // const int *p2=&v2,*const p3=&i,&r2=v2;
    // r1=v2; //整型常量赋值给整型v1
    // //p1=p2; //不能将 "const int *" 类型的值分配到 "int *" 类型的实体C/C++(513)
    // p2=p1;
    // p1=p3;//不能将 "const int *" 类型的值分配到 "int *" 类型的实体C/C++(513)
    // p2=p3;

    //int null=0,*p=null;//"int" 类型的值不能用于初始化 "int *" 类型的实体C/C++(144)
    // constexpr int null=0,*p=null;
    // std::cout<<p<<std::endl;


    // typedef double wages;
    // typedef wages base,*p;
    // p ptr=nullptr;
    // using my_double=double;
    // my_double d1=5.0;
    // std::cout<<d1<<std::endl;

    //2.5.2
    // int i=0,&r=i;
    // auto a=r;
    // const int ci=i,&cr=ci;
    // auto b=ci;
    // auto c=cr;
    // auto d=&i;
    // auto e=&ci;
    // const auto f=ci;
    // auto &g=ci;
    // const auto &h=42;
    // auto k=ci,&l=i;
    // auto &m=ci,*p=&ci;
    // //auto &n=i,*p2=&ci;
    // a=42;
    // b=42;
    // c=42;
    // d=42;
    // e=42;
    // g=42;

    // const int i=42;
    // auto j=i;//int
    // const auto &k=i;//const int &
    // auto *p=&i;//const int *,对常量对象取地址是一种底层const
    // const auto j2=i,&k2=i;//j2为const int;k2为const int &

    // decltype(f()) sum=5;
    // const int ci=0,&cj=ci;
    // decltype(ci) x=0;
    // decltype(cj) y=x;
    // decltype(cj) z;

    int a=3,b=4;
    decltype(a) c=a;
    decltype((b)) d=a;
    ++c;
    ++d;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<d<<std::endl;
    return 0;
}