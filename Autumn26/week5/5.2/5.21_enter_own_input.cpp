#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    
    std::cout<<"How many elements do you want to store?"<<std::endl;
    int n;
    std::cin>>n;
    std::cout<<"Enter your n elements."<<std::endl;
    for(int i=0;i<n;i++)
    {
        double a;
        std::cin>>a;
        v.push_back(a);
        std::cout<<"Enter your "<<i<<"th element.";
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}