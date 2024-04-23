#include <iostream>

//defining static variable, they are global variables so defining outside the class
class Var
{
public:
    static int m_static;
};

int Var::m_static {2};//like forward declaration, initializing, use scope resolution operator

int main()
{
    Var object{};
    object.m_static = 5;
    std::cout << object.m_static;
    return 0;
}
