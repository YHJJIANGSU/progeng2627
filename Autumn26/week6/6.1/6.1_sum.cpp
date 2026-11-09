#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("6.1_input.txt");

    if(infile.is_open()){ 
        int tmp;
        int sum = 0;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum = sum + tmp; 
        }
        std::cout << "Sum = " << sum << std::endl;

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}