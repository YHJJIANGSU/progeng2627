#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)
{
    vout.clear();
    for(int i=0;i<vin1.size();i++)
        {
            vout.push_back(vin1[i]);
        }
    for(int j=0;j<vin2.size();j++)
        {
            vout.push_back(vin2[j]);
        }
}
int main()
{
    std::vector<int> result;
    std::vector<int> t1 ={1,7,3,4};
    std::vector<int> t2 ={2,-2,19};
    append_vectors(t1, t2, result);
    std::cout<<"The result of the append vector is "<<std::endl;
    for(int k=0;k<result.size();k++)
    {
        std::cout<<result[k]<<std::endl;
    }
    return 0;
}