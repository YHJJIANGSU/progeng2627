#include <iostream>

int main()
{
    int n;
    std::cout<<"Enter a number: ";
    std::cin >> n;
    
    bool inrange;
    inrange=(-11<n)&&(n<11);
    while(inrange)
    {
        std::cout<<"Echo"<<n<< std::endl;
        std::cout<<"Enter a number"<<std::endl;
        std::cin >> n;
    }
    std::cout<<"Out of range";
    return 0;
}