#include <iostream>

int main()
{
    int year;
    std::cout << "please enter a year" << std::endl;
    std::cin >> year;
    if (year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                std::cout<<"A leap year.";
            }
            else
            {
                std::cout<<"Not a leap year.";
            }
        }
        else
        {
            std::cout<<"A leap year.";
        }
    }
    else
    {
        std::cout<<"Not a leap year.";
    }
    return 0;
}