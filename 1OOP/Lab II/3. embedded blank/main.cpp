#include <iostream>

//3. Write a program to read a line of text with embedded blanks.(String in C++)
#include <string>
int main()
{
    //unlike the std::cin, it terminates with the space
    //use std::getline(std::cin, str, char);
    //char is a terminator
    std::cout << "Enter multiple words :: ";
    std::string str{};
    std::getline(std::cin, str);//the new line is a default terminator


    return 0;
}
