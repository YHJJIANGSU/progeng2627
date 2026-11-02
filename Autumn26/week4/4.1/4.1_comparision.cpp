#include <iostream>
double comp (double n,double m)
{
    if(n<m)
    {
        return m;
    }
    else
    {
        return n;
    }
}
int main()
{
    std::cout<<"Enter two numbers a and b."<<std::endl;
    double a,b;
    std::cin>>a>>b;
    std::cout<<"The maximun number in the inputs is "<<comp(a,b)<<std::endl;
    return 0;
}