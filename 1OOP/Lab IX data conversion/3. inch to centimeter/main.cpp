#include <iostream>

// 3. Write a program to convert inch into centimeter. (1 cm = 0.39 inches)
int inchToCentimeter(float value)
//return int type
//demotion float to int
{
    return value * 0.39;
}
int main()
{
    float inch{};
    std::cout << "Enter inch :: ";
    std::cin >> inch;

    std::cout << inch << " == " << inchToCentimeter(inch) << " cm";
    return 0;
}
