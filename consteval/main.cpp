#include <iostream>
//use consteval, if you have a function that has to run on compile time
consteval int greater ( int x, int y)
{
    return ( x < y ? x : y );
}
int main()
{
    constexpr x { greater { 3, 6, };
    std::cout << x << " is the smallest!" << '\n';
    return 0;
}
