#include <iostream>

//best practice to declare a variable nearest to the usability of the variable in c++

int main()
{
    std::cout << "Enter the integer value of x :: ";
    int x{};
    std::cin >> x;
    std::cout << "x :: " << x << '\n';
    std::cout << "Enter the integer value of x :: ";
    int y{};
    std::cin >> y;
    std::cout << "y :: " << y << '\n';
    std::cout << "Enter the integer value of y :: ";
    int z{};
    std::cin >> z;
    std::cout << "z :: " << z << '\n';

}
