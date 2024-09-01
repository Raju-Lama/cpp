#include <iostream>
//function overloading, using same name for functions, but, different parameter types
int add(int x, int y)
{
    return x + y;
}

double add (double x, double y)
{
    return x + y;
}

int main()
{
    std::cout << add(3, 3);//resolution to int add(int x, int y) type function
    std:: cout << '\n' << add(3.1, 4.5);//resolutiono to double add(double x, double y)
    return 0;
}
