//3. WAP to find factorial of a given number.

#include <iostream>

int main()
{
    std::cout << "Enter a number :: ";

    int n;
    std::cin >> n;

    int fact{n};
    for (int i = 1; i < n; i++)
    {
        fact *= i;
    }

    std::cout << "The factorial of " << n << " is :: " << fact << '\n';

    return 0;
}
