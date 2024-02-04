#include <iostream>
//compile time constant with constexpr
constexpr int greater(int x, int y)
{
    return ( x > y ) ? x : y;
}

int main()
{
    int x{greater(5, 6)};//this becomes a compile time constant now.
    std::cout << x << " is greater!" << '\n';
    int y{5};//compile time constant, or run time
    return 0;
}
