#include <iostream>
#include <vector>
int main()
{
    std::vector<int>v;
    std::cout<<"Enter the number n."<<std::endl;
    int n,t;
    std::cin>>n;
    v.push_back(n);
    std::cout<<"Enter the number t."<<std::endl;
    std::cin>>t;
    while(t<=n)
    {
        std::cout<<"Enter your number t."<<
        std::endl;
        std::cin>>t;
        v.push_back(t);
    }
    std::cout<<"You entered the following sequence."<<std::endl;
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<std::endl;
    }
}