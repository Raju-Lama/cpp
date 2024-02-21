#include <iostream>
//for compile time evaluation
constexpr int great(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    constexpr int big{great(6, 4)};//evaluated at compile time for better performance.
    std::cout << big << '\n';
    return 0;
}
