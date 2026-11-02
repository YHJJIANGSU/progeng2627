#include <iostream>
#include <vector>
int main()
{
    std::vector<int>v;
    std::cout<<"Enter the number n."<<std::endl;
    int n,a,b;
    std::cin>>n;
    int i=0;
    while(i<n)
    {
        std::cout<<"Enter your number."<<std::endl;
        std::cin>>a;
        v.push_back(a);
        i=i+1;        
    }
    std::cout<<"Please enter a number."<<std::endl;
    std::cin>>b;
    int c=0;
    int d=0;
    for(int j=0;j<n;j++)
    {
        if(v[j]==b)
        {
            {
                
            }
            c++;
        }
    }
    if(c>0)
    {
        std::cout<<"There are "<<c<<" occurences of "<<n<<std::endl;
    }
    else
    {
        std::cout<<"There are no occurences of "<<n<<std::endl;
    }

}