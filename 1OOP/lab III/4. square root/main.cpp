#include <iostream>
#include <math.h>
//4. WAP to find the square root of given integer using inline function. (Inline Function)
inline int Square(int n)
{
    return sqrt(n);
}
int main()
{
    std::cout << Square(16);
    return 0;
}
