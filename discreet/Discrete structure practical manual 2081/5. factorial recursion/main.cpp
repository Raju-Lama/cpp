#include <iostream>

//5. WAP to find factorial of n numbers using recursion

int factorial(int n)
{
    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}
int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;

    std::cout << "The factorial is :: " << factorial(num);
    return 0;
}
