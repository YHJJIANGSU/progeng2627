#include <iostream>
int main()
{
    int n,x,a;
    a=1;
    std::cout<<"Enter your x and n"<<std::endl;
    std::cin>>x>>n;
    for(int i = 0; i < n; i++)
    {
        a=a*x;
        std::cout << a << std::endl;
    }
    return 0;
}