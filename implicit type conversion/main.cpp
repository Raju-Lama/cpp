#include <iostream>
//implicit type conversion
//converting one fundamental data type to another, by compiler without asking for,
// the compiler automatically converts the type in this regard,
double enterSomething(double x)//accepts double
{
    return x;
}
void print(double x)
{
    std::cout << x << '\n' ;//should print 5.0;
}
int main()
{
    std::cout << enterSomething(5) << '\n' ;//we are inputting an integer type;//should print 5.0
    int x{5};
    print(x);//calling with integer value of x;
    return 0;
}
