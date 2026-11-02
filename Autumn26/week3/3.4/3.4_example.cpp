#include <iostream>
int main()
{
    int n,curmax;
    std::cout<<"Please enter number: "<<std::endl;
    std::cin>>n;

    curmax=n;
    std::cout<<"Maximum so far: "<<curmax<<std::endl;
    while (n!=0)
    {
        std::cout<<"Please enter number: "<<std::endl;
        std::cin>>n;
        if(n>curmax)
        {
            curmax=n;
        }
        std::cout<<"maximum so far "<<curmax<<std::endl;
    }
}