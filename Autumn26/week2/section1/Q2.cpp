#include <iostream>
int main()
{
    int n;
    std::cin>>n;
    if(n<2)
    {
        n=n-1;
    }
    if(n<1)
    {
        n=n+1;
    }
    else
    {
        n=0;
    }
    std::cout<<n<<std::endl;
    return 0;
}
