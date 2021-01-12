#ifndef E2_42_H
#define E2_42_H

#include <string>
#include <iostream>
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    void CalcRevenue(double price); //计算收益 相同的编号但每本书的price是不同的
    double CalcAveragePrice();      //计算平均单价
    void SetData(Sales_data data);  //设置数据
    void AddData(Sales_data data);  //书籍编号相同，数据相加
    void Print();
};

void Sales_data::CalcRevenue(double price)
{
    revenue = units_sold * price;
}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
    if (bookNo != data.bookNo)
        return;
    units_sold += data.units_sold;
    revenue += data.revenue;
}

double Sales_data::CalcAveragePrice()
{
    if (units_sold != 0)
        return revenue / units_sold;
    else
        return 0.0;
}

void Sales_data::Print()
{
    std::cout <<"bookNo:"<<bookNo << " units_sold:" << units_sold << " revenue:" << revenue;
    double averagePrice = CalcAveragePrice();
    if (averagePrice != 0.0)
        std::cout <<" averagePrice:"<< averagePrice << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
}

#endif
