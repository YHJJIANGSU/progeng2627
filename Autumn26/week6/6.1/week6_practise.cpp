#include <iostream>
#include <vector>
void f(std::vector<int> vin, int n,std::vector<int>& vout)
{
    for (int i=0;i<vin.size();i++)
    {
        if(vin[i]<n)
        {
            vout.push_back(vin[i]);
        }
    }
}
int main()
{
    std::vector<int> vin;
    int n;
    std::vector<int> vout;
    vin = {3,2,6};
    n=4;
    f(vin,n,vout);
    std::cout<<vout[0]<<std::endl;
    vin = {5,-1};
    n=2;
    f(vin,n,vout);
    std::cout<<vout[0]<<std::endl;
}