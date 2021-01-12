#include<string>
struct Sales_data{
    std::string bookNo;
    std::string bookName;
    unsigned units_sold=0;//卖出数量
    double revenue=0.0;//收益
    double price=0.0;//单价
    //...
};