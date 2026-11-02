#include <iostream>
#include <cmath>
int main()
{
    int s=0,x,n;
    std::cout<<"Enter your number x and power n."<<std::endl;
    std::cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+std::pow(x,i);
    }
    std::cout<<"The sum of the series is "<<s<<std::endl;
    return 0;
}