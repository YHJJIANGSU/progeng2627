#include <iostream>
int main()
{
    int n;
    std::cin>>n;

    double result = n/2;
    if (result>2)
    {
        std::cout<<"a"<<std::endl;
    }
    else
    {
        std::cout<<"b"<<std::endl;
    }
    return 0;
}