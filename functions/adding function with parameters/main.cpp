#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    std::cout << "Enter 2 numbers to add:: " << '\n';
    std::cin >> x;
    std::cin >> y;
    std::cout << "The sum is :: " << add(x, y) << '\n.' ;
    return 0;
}
