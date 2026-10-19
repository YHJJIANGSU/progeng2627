#include <iostream>
int main()
{
    double n, absv;
    std::cout<<"Please enter an integer";
    std::cin>>n;
    if(n<0)
    {
        absv=-n;
    }
    else
    {
        absv = n;
    }
    std::cout<<"|" << n << "| = " << absv << std::endl;
    return 0;
}