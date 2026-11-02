#include <iostream>
int main()
{
    int n,cf=2;
    std::cout<<"Please enter a number."<<std::endl;
    bool found_factor = false;
    std::cin>>n;
    while(cf<n)
    {
        if(n%cf ==0)
        {
            found_factor = true;
        }
        cf++;
    }
    if(found_factor)
    {
        std::cout<<"n isn't a prime."<<std::endl;
    }
    else
    {
        std::cout<<"n is a prime."<<std::endl;
    }
    return 0;
}
    