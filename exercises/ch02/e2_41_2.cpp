/**
 * @file e2.41_2.cpp
 * @author DoBetter (db.xi@zju.edu.cn)
 * @brief 判断输入的书籍编号是否相等
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<string>
#include<cstdio>
struct Sale_data
{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    double price=0.0;
};
int main()
{

    freopen("in.txt","r",stdin);//重定向输入流 //in.txt 建在程序所在的文件夹里 ，in.txt需要先建好
	freopen("out.txt","w",stdout);//重定向输出 out.txt不需要自己先建好,out.txt已存在时再进行写入，会将out.txt覆盖

    Sale_data book1,book2;
    std::cin>>book1.bookNo>>book1.units_sold>>book1.price;
    std::cin>>book2.bookNo>>book2.units_sold>>book2.price;
    book1.revenue=book1.units_sold*book1.price;
    book2.revenue=book2.units_sold*book2.price;
    if(book1.bookNo==book2.bookNo)
    {
        unsigned totalCnt=book1.units_sold+book2.units_sold;
        double totalRevenue=book1.revenue+book2.revenue;
        std::cout<<book1.bookNo<<" "<<totalCnt<<" "<<totalRevenue<<" ";
        if(totalCnt!=0)
            std::cout<<totalRevenue/totalCnt<<std::endl;
        else 
            std::cout<<"no sales"<<std::endl;
        return 0;
    }
    else
    {
        std::cerr<<"Data must refer to same ISBN"<<std::endl;
        return -1;// indicate failure(表明失败)
    }
    
}