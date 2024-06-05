//5. WAP that shows the use of setprecision(), and fixed manipulator.

#include <iostream>
#include <iomanip> //for std::setprecision(int n)
//manipulators doesn't return value, but, manipulates stream formatting

int main()
{
    double pi {33.141592654};

    std::cout << std::setprecision(3) << pi << std::endl;
    //without fixed
    //setprecision counts from the beginning before decimal

    std::cout << std::fixed << std::setprecision(4) << pi << std::endl;
    //now with fixed, we can avoid presentations of data in exponential formatting
    //also, it makes 33 a fixed value, and setprecision counts only after the decimal

    return 0;
}
