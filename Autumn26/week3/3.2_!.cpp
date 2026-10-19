#include <iostream>
int main()
{
    int a,n;
    a=1;
    std::cout<<"Enter your value of n"<<std::endl;
    std::cin>>n;
    for(int i=0;i<n-1;i++)
    {
        a=a*(n-i);
        std::cout<<a<<std::endl;
    }
    return 0;
}