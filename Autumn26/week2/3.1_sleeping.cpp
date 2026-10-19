#include <iostream>
int main()
{
    int a,b,n;
    n=0;
    std::cout<<"Please enter your dividend and divider";
    std::cin>>a>>b;
    std::cout<<"We want to perform the integer division of "<<a<<" by "<<b<<std::endl;
    while (a>b)
    {
        std::cout<<a<<" is larger than "<<b<<"."<<std::endl;
        n=n+1;
        a=a-b;
    }
    std::cout<<"The quotient number is "<<n<<std::endl;
    std::cout<<"The remainder number is "<<a%b<<std::endl;
    return 0;
}