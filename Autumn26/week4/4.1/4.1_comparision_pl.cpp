#include <iostream>
double comp (double m,double n,double o)
{
    if(m<n)
    {
        if(n<o)
        {
            return o;
        }
        else
        {
            return n;
        }
    }
    else
    {
        if(m<o)
        {
            return o;
        }
        else
        {
            return m;
        }
    }
        
}

int main()
{
    std::cout<<"Enter three numbers a, b and c."<<std::endl;
    double a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<"The maximun number in the inputs is "<<comp(a,b,c)<<std::endl;
    return 0;
}