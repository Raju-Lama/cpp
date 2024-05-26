#include <iostream>
template <typename T, typename U>
T add(T x, U y);

int add(int x, int y)
{
    return x+y;
}

int main()
{
    std::cout << add(5, 5) << '\n' ;
    return 0;
}
