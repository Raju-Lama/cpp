#include <iostream>
//implicit type conversion
//converting one fundamental data type to another, by compiler without asking for,
// the compiler automatically converts the type in this regard,
int enterSomething(double x)
{
    return x;
}
int main()
{
    std::cout << enterSomething(5);
    return 0;
}
