#include <iostream>

int main()
{
    int n=4, counter = 0;

    while(counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }
    std::cout<<"The number of counter is "<<counter<<std::endl;
    return 0;
}