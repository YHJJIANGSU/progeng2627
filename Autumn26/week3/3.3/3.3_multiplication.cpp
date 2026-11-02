#include <iostream>
#include <cmath>
int main()
{
    std::cout<<"Write the number n that you want to make a multiplication table"<<std::endl;
    int n;
    std::cin>>n;
    std::cout<<n<<std::endl;
    for(int a=1;a<n+1;a++)
    {
        for(int b=1;b<n+1;b++)
        {
            std::cout<<a*b<<"\t";
        }
        std::cout<<std::endl;
    }
    return 0;
}