#include <iostream>
//1. WAP to show cascading of I/O operators.
//WAP = write a program
int main()
{
    std::cout << "Enter integer values for a and b respectively :: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "a :: " << a << "\t b  :: " << b << '\n';
    return 0;
}
