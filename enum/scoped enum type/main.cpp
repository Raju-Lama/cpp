#include <iostream>

//scoped enumeration type
namespace Color
{
    enum Color
    {
        red,//0
        pink,//1
        blue,//2
    };
}//limited scope for the use of red, pink, and blue,so no naming collision now

int main()
{
    Color::Color sky{Color::blue};
    std::cout << Color::blue;
    return 0;
}
