#include <iostream>
//compile time constant with constexpr
constexpr int greater(int x, int y)
{
    return ( x > y ) ? x : y;
}

int main()
{
    constexpr int x{5};
    constexpr int y{6};
    constexpr int g {greater(x, y)};//this becomes a compile time constant now.
    std::cout << g << " is greater!" << '\n';
    return 0;
}
