#include<iostream>
#include<vector>
#include<memory>
int main()
{
    //std::unique_ptr<float []> data;
    auto d={1.1,2.2,3.3,4.4,5.5};
    //auto data=std::make_unique<double []>(d);//错误
    auto data2=std::make_unique<std::vector<double>>(d);
    //auto data3=std::make_unique<float []>(new float[5]);//无法使用make_unique的方式定义？
    std::unique_ptr<float []> data4(new float[5]);
    for(auto i=0;i<5;i++)
    {
        data4[i]=i;
    }
    std::cout<<std::endl;
    for(auto i=0;i<5;i++)
    {
        std::cout<<data4[i]<<" ";
    }
    std::vector<float> v;
    v.resize(5);
    memcpy(v.data(),data4.get(),5*sizeof(float));
    for(auto e:v)
        std::cout<<e<<" ";
    return 0;
}