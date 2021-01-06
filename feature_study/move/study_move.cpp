/**
 * @file study_move.cpp
 * @author DoBetter (db.xi@zju.edu.cn)
 * @brief 原value值被moved from之后值被转移,所以为空字符串. 
 * @version 0.1
 * @date 2020-12-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<iostream>
#include<utility>//包含move
#include<vector>
#include<string>
int main()
{
    std::string str="Hello";
    std::vector<std::string> v;
    //调用常规的拷贝构造函数，新建字符串，拷贝数据
    v.push_back(str);
    std::cout<<"After copy,str is \""<<str<<"\"\n";
    //调用移动构造函数，掏空str，掏空后，最好不用使用str
    v.push_back(std::move(str));
    std::cout<<"Afrer move,str is \""<<str<<"\"\n";
    std::cout<<"The contents of the vector are \""<<v[0]
    <<"\",\""<<v[1]<<"\"\n";
    return 0;
}
/*
输出：
After copy,str is "Hello"
Afrer move,str is ""
The contents of the vector are "Hello","Hello"
*/
