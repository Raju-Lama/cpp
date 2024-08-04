#include <iostream>
//4. Write a program to read multiple lines of text
//from keyboard.(String in C++)
#include <string>
int main()
{
    std::cout <<  "Enter Multiple lines of texts :: ";
    std::string str{};
    std::getline(std::cin, str, '@');
    //after @ enter it will end the multiple lines

    std::cout << "The text you entered is :: " << std::endl << str;
    return 0;
}
