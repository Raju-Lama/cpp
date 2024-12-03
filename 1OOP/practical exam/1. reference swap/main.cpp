#include <iostream>

//1. Write a function using reference variables as arguements to swap the values of a pair of floating point number

void swap(float& x, float& y)
{
    float temp{};
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    float a, b;
    std::cout << "Enter value of a :: ";
    std::cin >> a;

    std::cout << "Enter value of b :: ";
    std::cin >> b;

    std::cout << "\n\nValues before swapping :: \n" << " a :: " << a << " b :: " << b << "\n\n";

    swap(a, b);//calling swap function

    std::cout << "Value after swapping :: \n\n";
    std::cout << " a :: " << a;
    std::cout << " b :: " << b << '\n';
    return 0;
}
