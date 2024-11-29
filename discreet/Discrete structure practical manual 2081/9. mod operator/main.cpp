#include <iostream>

// 9. WAP to simulate the use of MOD operator

int main()
{
    std::cout << "Enter two numbers ::";
    int a, b;
    std::cin >> a >> b;
    int rem{a%b};
    std::cout << "Remainder :: " << rem;
    return 0;
}
