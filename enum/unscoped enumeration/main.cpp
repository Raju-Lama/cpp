#include <iostream>
//unscoped enumeration type,
enum Color
{
    red,//0
    yellow,//1
    pink,//2
    blue,//3
};
//drawback is naming collision, as red, yellow, pink, and blue are global type
int main()
{
    Color sky {blue};//sky is blue
    Color apple {red};//apple is red
    std::cout << sky << apple;//gives the integral that the enum members carry
    return 0;
}
