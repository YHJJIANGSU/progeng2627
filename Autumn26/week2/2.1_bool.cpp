#include <iostream>
int main()
{
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    bool is_even;
    is_even=(rem==0);
    if (is_even)
    {
        std::cout<<"The number is even"<<std::endl;
    }  
    else
    {
        std::cout<<"The number is odd"<<std::endl;
    }
    return 0;
}