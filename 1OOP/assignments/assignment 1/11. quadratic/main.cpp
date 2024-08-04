#include <iostream>
/*
11.	Write a program to create a class named "Quadratic" representing a
function of form f(x) = ax2 + bx +C, where x is a real variable and a, b, c are
real constants. The class must satisfy the following requirements.
a.	A constructor that takes the values of a, b, and c as arguments should be provided.
All three of these arguments should default to zero.
b.	A function that takes a single argument x returns the value of f(x).
c.	All data members should be private.
*/
class Quadratic
{
    int m_a{0}, m_b{0}, m_c{0};

public:
    Quadratic(int a, int b, int c)
        : m_a{a},
          m_b{b},
          m_c{c}
    {
    }

    int takeX(int);//forward declaration
};

int Quadratic::takeX(int x)
{
    return (m_a*x*x + m_b*x + m_c);
}

int main()
{
    Quadratic fofX{5, 6, 7};
    std::cout << fofX.takeX(1);//pass an integer value
    return 0;
}
