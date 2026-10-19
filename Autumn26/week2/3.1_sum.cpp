#include <iostream>
int main()
{
    int n,sum;
    std::cout<<"Enter a real number"<<std::endl;
    std::cin>>n;
    sum=0;
    while(n!=0)
    {
        sum=sum+n;
        std::cout<<"The sum so far is "<<sum<<std::endl;
        std::cout<<"Enter a real number"<<std::endl;
        std::cin>>n;
    }
    std::cout<<"stopping"<<std::endl;
    return 0;
}