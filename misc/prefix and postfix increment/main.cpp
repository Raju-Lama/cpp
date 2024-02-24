#include <iostream>

int main()
{
    int x{0};
    int y{x++};
    std::cout << y << std::endl;//prints 0
    std::cout << y << std::endl;//prints 0
    ++x;
    std::cout << x;//prints 2
    return 0;
}
