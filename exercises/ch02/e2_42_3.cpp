#include "e2_42.hpp"
#include <iostream>

int main()
{
    freopen("e2_42_3_in.txt","r",stdin);
    freopen("e2_42_3_out.txt","w",stdout);
    Sales_data total;
    double price;
    if(std::cin>>total.bookNo>>total.units_sold>>price)
    {
        total.CalcRevenue(price);
        Sales_data trans;
        double price;
        while(std::cin>>trans.bookNo>>trans.units_sold>>price)
        {
            trans.CalcRevenue(price);
            if(total.bookNo==trans.bookNo){
                total.AddData(trans);
            }
            else
            {
                total.Print();
            }
        }
        total.Print();
        return 0;
    }
    else
    {
        std::cerr<<"No data?!"<<std::endl;
        return -1;// indicate failure
    }
}