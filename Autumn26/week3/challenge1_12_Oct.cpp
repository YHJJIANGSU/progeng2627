#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    if((a+b>c)&(b+c>a)&(a+c>b))
    {
        std::cout<<"This is a triangle"<<std::endl;
        if(a==b==c)
        {
            std::cout<<"This triangle is an equilateral"<<std::endl;
        }
        else if((a==b)||(b==c)||(a==c))
        {
            std::cout<<"This triagle is an isosceles"<<std::endl;;
        }
        else
        {
            std::cout<<"This triangle is a scalene<<"<<std::endl;
        }
    }
    else
    {
        std::cout<<"Not a triangle";
    }
    return 0;
}