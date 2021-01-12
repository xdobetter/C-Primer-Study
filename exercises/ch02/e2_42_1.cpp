#include "e2_42.hpp"
#include<iostream>
int main()
{
    freopen("e2_42_1_in.txt","r",stdin);//重定向输入流 //in.txt 建在程序所在的文件夹里 ，in.txt需要先建好
	freopen("e2_42_1_out.txt","w",stdout);//重定向输出 out.txt不需要自己先建好,out.txt已存在时再进行写入，会将out.txt覆盖
    Sales_data book;
    double price;
    std::cin>>book.bookNo>>book.units_sold>>price;
    book.CalcRevenue(price);
    book.Print();
    return 0;
}