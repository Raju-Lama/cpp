#include <iostream>
#include <cmath>
//goto statement

int main()
{
    double x{};
    tryagain:
        std::cout << "Enter a non-negative number :: ";
        std::cin >> x;

    if(x < 0.0)
        goto tryagain;//if a negative number is entered, it goes back to tryagain/

    std::cout << "The square root of the number is :: " << std::sqrt(x);

    return 0;
}
