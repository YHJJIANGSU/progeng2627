#include <iostream>
#include <vector>
#include <cmath>
int min_vector_element(const std::vector<double>& vin)
{
    if(vin.size()==0)
    {
        return -1;
    }
    else
    {
        int min_index=0;
        double min_val=vin[0];
        for(int i=1;i<vin.size();i++)
        {
            if(min_val>vin[i])
            {
                min_index=i;
                min_val=vin[i];
                
            }
        }
        return min_index;
    }
}
int main()
{
    std::vector<double> test1={};
    std::cout<<"Test1 is empty, got "<<min_vector_element(test1)<<std::endl;
    std::vector<double> test2={1};
    std::cout<<"Test2 is single, got "<<min_vector_element(test2)<<std::endl;
    std::vector<double> test3={1,2,3};
    std::cout<<"Test3:expected 0, got "<<min_vector_element(test3)<<std::endl;
    std::vector<double> test4={1,2,0,3};
    std::cout<<"Test4:expected 2,got "<<min_vector_element(test4)<<std::endl;
    return 0;
}