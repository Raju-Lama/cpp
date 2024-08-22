#include <iostream>
/*try {
    // code that may cause exception
    // usually includes a throw statement
}
catch (arg) {
    //  code to run when exception occurs
    //otherwise, this is skipped
}

In C++, we use the try, throw, and catch statements to handle exceptions.

try: It includes the block of code that can cause exceptions.
throw: It throws an exception when an error is encountered.
catch: It catches the exception and executes a block of code when an exception occurs.

Note: We can skip the throw statement in some cases, especially
if we use certain standard C++ exceptions.
*/
int main()
{
    //floating point error or zero division error in python
    std::cout << "Enter numerator :: ";
    int numerator{};
    std::cin >> numerator;

    std::cout << "Enter denominator :: ";
    int denominator{};

    try
    {
        std::cin >> denominator;

        if (denominator == 0)
            throw 0;

        std::cout << "Division quotient is :: " << numerator / denominator << '\n';
    }

    catch(int num)
    {
        std::cout << "Denominator cannot be zero!";
    }


    return 0;
}
