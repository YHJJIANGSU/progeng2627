#include <iostream>
int main()
{
    int n,rem;
    std::cout<<"Please enter a number"<<std::endl;
    std::cin>>n;

    rem=n%3;
    if(rem==0)
    {
        std::cout<<"The number is a mutiple of 3"<<std::endl;
    }
    else
    {
        std::cout<<"The number isn't a multiple of 3"<<std::endl;
    }
    return 0;
}
