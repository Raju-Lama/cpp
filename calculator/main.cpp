#include <iostream>
//to create a calculator
//odd loop
double input();//forward declaration

int main()
{
    double a{input()};
    double b{input()};
    std::cout << "Enter an operator :: +, -, /, *, % :: ";
    char operate{};
    std::cin >> operate;
    std::cout << '\n' << "         ";
    if(operate == '+')
        std::cout << a << operate << b << " = " << a + b;
    if(operate == '-')
        std::cout << a << operate << b << " = " << a - b;
    if(operate == '/')
        std::cout << a << operate << b << " = " << a / b;
    if(operate == '*')
        std::cout << a << operate << b << " = " << a * b;
    /*if(operate == '%')
    *   std::cout << a << operate << b << " = " << a % b;
    *   cannot do this because, double doesn't return remainder, it keeps it after decimal
    */
    std::cout << '\n' << "       Do  you want to continue ? [y/n] :: ";
    char repeat{};
    std::cin >> repeat;
    /* something wrong
    bool repeat{};

    while(!repeat);//when y or n is not pressed
    {
        if(value == 'y' || 'Y')//cannot do this.
            repeat = 0;
        std::cin >> value;
    }*/
    if(repeat == 'y')//don't put multiple conditions for character input as 'y' || 'Y' || 'n'
        main();// calling main

    return 0;

}
