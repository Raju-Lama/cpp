#include <iostream>
//return type function returns a value of the data type we assign to a function
int newFunct()
{
    return 5;
}
int main()
{
    std::cout << newFunct() << '\n';//prints 5 from the return value;
    std::cout << newFunct() + 2 << '\n';//prints 7;
    newFunct();//value remains the same from original function that is 5
    std::cout << newFunct() << '\n';//returns 5 and print in the console;
    return 0;//it tells the program ran correctly; this is a status code or exit code
}
