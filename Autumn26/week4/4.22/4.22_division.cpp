#include <iostream>
#include <cmath>
// for the square root

bool quadsolve(int a, int b, int& x1, int& x2){

    bool realsol;

    if(b<=0){
        realsol = false;
    }
    else{

        realsol = true;
        x1 = (b/a);
        x2 = (b%a);

        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. std::pow(delta, 0.5)

    }

    return realsol;
}

int main(){

    int a, b;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "this program finds the quotient and remain" << std::endl;
    std::cout << "of a division with the dividend b and divider a" << std::endl;
    std::cout << "please enter the coefficients a, b:" << std::endl;

    std::cin >> a >> b;

    int s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(quadsolve(a, b,s1, s2)){
        std::cout << "The quotient and remain are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "There is no solution" << std::endl;
    }

}