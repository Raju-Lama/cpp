#include <iostream>

int input();//to input from a user
int add(int x, int y);//forward function declaration to add two number;

int main()
{
    int x{input()};//initialized by calling the function for input
    int y{input()};

    std::cout << "The sum of " << x << " and " << y << " is :: " << add(x, y) << '\n';
    return 0;
}

int input()
{
    std::cout << "Enter a integer number :: ";
    int a{};
    std::cin >> a;
    /*
    *std::cout << "\nEnter 2nd integer number :: "
    *int b{};
    *std::cin >> b;
    */ //this function is no longer needed.
    return a;
}

int add(int x, int y)
{
    return x + y;
}
