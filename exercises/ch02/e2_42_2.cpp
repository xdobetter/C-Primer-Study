#include "e2_42.hpp"
#include<iostream>

int main()
{
    freopen("e2_42_2_in.txt","r",stdin);
    freopen("e2_42_2_out.txt","w",stdout);
    Sales_data book1,book2;
    double price1,price2;
    std::cin>>book1.bookNo>>book1.units_sold>>price1;
    std::cin>>book2.bookNo>>book2.units_sold>>price2;
    book1.CalcRevenue(price1);
    book2.CalcRevenue(price2);
    if(book1.bookNo==book2.bookNo)
    {
        book1.AddData(book2);
        book1.Print();
        return 0;
    }
    else
    {
        std::cerr<<"Data must refer to same ISBN"<<std::endl;
        return -1;
    }
}