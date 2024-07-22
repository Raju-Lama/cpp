#include <iostream>
//1. Write a function using reference variables
//as arguments to swap the values of a pair of
// floating point numbers. (Reference Variable)

float swap(double& x, double& y)
{
    double temp{x};
    x = y;
    y = temp;
}

int main()
{
    double a{5.5}, b{2.2};
    std::cout << "Before swapping :: a = " << a << " b = " << b << std::endl;

    swap(a, b);
    std::cout << "After swapping :: a = " << a << " b = " << b << std::endl;

    return 0;
}
