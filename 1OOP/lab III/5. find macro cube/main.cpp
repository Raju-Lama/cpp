#include <iostream>
//5. Define macro to find cube of a given number. (Macro in C++)
#define CUBIC(n) (n*n*n)

int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;
    std::cout << "The cubic of " << num << " is :: " << CUBIC(num);
    return 0;
}
