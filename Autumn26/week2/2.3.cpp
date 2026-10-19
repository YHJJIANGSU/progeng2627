#include <iostream>
#include <string>
int main()
{
    double length_in, length_out;
    std::string unit_in, unit_out;
    const double mile_to_kilm = 1.609;
    std::cin>>length_in>>unit_in;
    if (unit_in =="km")
    {
        unit_out = "mile";
        length_out = length_in/mile_to_kilm;
    }
    else
    {
        unit_out ="kilm";
        length_out = length_in*mile_to_kilm;
    }
    std::cout << length_out << " " << unit_out << std::endl;
    return 0;
}