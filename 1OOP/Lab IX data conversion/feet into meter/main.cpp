#include <iostream>

// 5. WAP to convert Feet into Meter.(1F = 0.304 Meter)
float feetToMeter(float feet)
{
    return feet * 0.304;
}
int main()
{
    float feet;
    std::cout << "Enter Feet :: ";
    std::cin >> feet;

    std::cout << feet << " == " << feetToMeter(feet) << " meters";
    return 0;
}
