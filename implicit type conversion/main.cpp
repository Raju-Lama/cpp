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
    //int x{5.0}
    //cannot do this, this is also why brace initialization is a good approach.
    //also, double x{5}; is okay
    print(x);//calling with integer value of x;
    return 0;
}

//from int to double, it is a safe implicit type conversion
//but, from double to int, it might not be a good approach, this is an unsafe method, as there would be loss of data.
