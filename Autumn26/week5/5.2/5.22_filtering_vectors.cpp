#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    for(int i=0;i<vin.size();i++)
    {
        if(vin[i]<t)
        {
            vout.push_back(vin[i]);
        }
    }
}

int main()
{
    std::vector<double> v1 {1,2,3,4,4,5,6,7};
    std::vector<double> v2;
    double t;
    std::cout<<"Enter your t"<<std::endl;
    std::cin>>t;
    filter_v(v1,t,v2);
    std::cout<<"The number in the input vector which is smaller than t is:"<<std::endl;
    for(int k=0;k<v2.size();k++)
    {
        std::cout<<v2[k]<<std::endl;
    }
    return 0;
}