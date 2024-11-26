#include <iostream>

// 5. WAP to convert Feet into Meter.(1F = 0.304 Meter)
int feetToMeter(float feet)
//return integer type, implicit conversion
{
    return feet * 0.304;
}
int main()
{
    float feet;
    //take float
    std::cout << "Enter Feet :: ";
    std::cin >> feet;

    std::cout << feet << " == " << feetToMeter(feet) << " meters";
    //conversion is integer type
    return 0;
}
