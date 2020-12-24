/**
 * @file study_union.cpp
 * @author your name (you@domain.com)
 * @brief union学习
 * from book P750
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<iostream>

union Token{//默认情况下成员是共有的
    char cval;
    int ival;
    double dval;
};

void print(Token *p){
    std::cout<<p->cval<<std::endl;
    std::cout<<p->ival<<std::endl;
    std::cout<<p->dval<<std::endl;
}

int main()
{

    Token *pt=new Token;
    //为union的一个数据成员赋值会令其他数据成员变成未定义的状态
    pt->ival=42;
    print(pt);
    pt->cval='s';
    print(pt);
    pt->dval=5.21;
    print(pt);
    return 0;
}