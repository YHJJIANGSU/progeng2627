#include <iostream>
int main()
{
    int n,rem;
    std::cout<<"Please enter a number"<<std::endl;
    std::cin>>n;

    rem=n%2;
    if(rem==0)
    {
        std::cout<<"The number is even"<<std::endl;
    }
    else
    {
        std::cout<<"The umber is odd"<<std::endl;
    }
    return 0;
}