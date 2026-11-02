#include <iostream>
#include <cmath>
// for the square root

bool quadsolve(double a, double b, double& x1, double& x2){

    bool realsol;

    if((a<=0)||(b<=0))
    {
        realsol = false;
    }
    else{

        realsol = true;
        x1 = a*2+b*2;
        x2 = a*b;

        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. std::pow(delta, 0.5)

    }

    return realsol;
}

int main(){

    double a, b;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "this program finds the perimeter and area" << std::endl;
    std::cout << "of an rectangle with length a and side b" << std::endl;
    std::cout << "please enter the coefficients a, b:" << std::endl;

    std::cin >> a >> b;

    double s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(quadsolve(a, b, s1, s2)){
        std::cout << "The perimeter and the area are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "Not a rectangle" << std::endl;
    }

}