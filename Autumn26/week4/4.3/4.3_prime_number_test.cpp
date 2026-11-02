#include <iostream>
int prime_t (int n)
{
    for(int m = 2; m < n; m++)
    {

        if( (n % m) == 0)
        { // n can be divided by cf...

            return m;
            //...it means we have found a factor!
        }
    }
    return 0;
}
int main()
{
    std::cout<<"Enter your number n."<<std::endl;
    int n;
    std::cin>>n;
    int f=prime_t(n);
    if(f==0)
    {
        std::cout<<"n is a prime number."<<std::endl;
    }
    else
    {
        std::cout<<"The smallest factor of n is "<<f<<std::endl;
    }
    return 0;
}