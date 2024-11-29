#include <iostream>
//1. WAP to calculate compound statement validation using truth table

int main()
{
    std::cout << "Enter boolean value of p: ";
    int p; // p is proposition
    std::cin >> p;

    std::cout << "Enter boolean value of q: ";
    int q;
    std::cin >> q;

    std::cout << "Enter boolean value of r:";
    int r;
    std::cin >> r;

    bool validation;
    validation = p & q | r;

    std::cout << "Validation of compound statement: " << validation;
    // 1 is True
    // 0 is False

    return 0;
}
