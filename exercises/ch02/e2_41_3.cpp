/**
 * @file e2.41_3.cpp
 * @author DoBetter (db.xi@zju.edu.cn)
 * @brief 统计编号相同的书籍，并输出其相关信息
 * @version 0.1
 * @date 2021-01-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
struct Sale_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
    double price;
};

int main()
{

    //cout 和 cerr、clog 的一个区别是，cout 允许被重定向，而 cerr 和 clog 都不支持。值得一提的是，cin 也允许被重定向
    //因此cerr、clog的输出内容不会存储在stdout中
    freopen("e241_3in.txt", "r", stdin);   //重定向输入流 //in.txt 建在程序所在的文件夹里 ，in.txt需要先建好
    freopen("e241_3out.txt", "w", stdout); //重定向输出 out.txt不需要自己先建好,out.txt已存在时再进行写入，会将out.txt覆盖
    Sale_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.price)
    {
        total.revenue = total.units_sold * total.price;
        Sale_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.price)//文件输入完循环终止
        {
            trans.revenue = trans.units_sold * trans.price;
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold; //统计总的册数
                total.revenue += trans.revenue;       //统计总的收益
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    std::cout << total.revenue / total.units_sold << std::endl; //输出平均价格
                else
                    std::cout << "no sales" << std::endl;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
            std::cout << total.revenue / total.units_sold << std::endl;
        else
            std::cout << "no sales" << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1; //indicate failure
    }
}