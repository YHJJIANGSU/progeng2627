#include <iostream>
int main()
{
    std::cout<<"Guess the number I am thinking."<<std::endl;
    int n;
    int a=46;
    std::cin>>n;
    while (n!=a)
    {
        if(n<a)
        {
            std::cout<<"Too small! Guess again."<<std::endl;
        }
        else if(n>a)
        {
            std::cout<<"Too large! Guess again."<<std::endl;
        }
        std::cin>>n;
    }
    std::cout<<"Correct! Congratulations!"<<std::endl;
    return 0;
}