#include <iostream>
int main()
{
    int n;
    double sum,a;
    std::cout<<"Enter a real number"<<std::endl;
    std::cin>>n;
    sum=0;
    a=0;
    while(n!=0)
    {
        sum=sum+n;
        a=a+1;
        std::cout<<"The average so far is "<<sum/a<<std::endl;
        std::cout<<"Enter a real number"<<std::endl;
        std::cin>>n;
    }
    std::cout<<"stopping"<<std::endl;
    return 0;
}