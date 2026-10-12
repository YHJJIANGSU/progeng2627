#include <iostream>
#include <string>
int main()
{
    std::string user_name;
    std::string user_surname;
    std::cout<<"What's your name?"<<std::endl;
    std::cin>>user_name;
    std::cout<<"What's your surname?"<<std::endl;
    std::cin>>user_surname;
    std::cout<<"Hello "<<user_name<<" "<<user_surname;
    return 0;
}