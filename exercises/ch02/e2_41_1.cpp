#include<iostream>
#include<string>
struct Sale_data
{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;//收益
    double price=0.0;//单价
};
int main()
{
    Sale_data book;
    std::cin>>book.bookNo>>book.units_sold>>book.price;
    book.revenue=book.units_sold*book.price;
    std::cout<<book.bookNo<<" "<<book.units_sold<<" "<<book.revenue;
    return 0;
}