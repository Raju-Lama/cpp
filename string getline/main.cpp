#include <iostream>
#include <string>
//similar issues as in c to input character or string after the new line or white space
//using std::getline (std::cin >> std::ws , string_name)
//std::ws is used to ignore white space while inputting strings
int main()
{
    std::cout << "Enter your full name :: ";
    std::string fullName{};
    std::getline(std::cin >> std::ws, fullName);//std::ws is to ignore any white spaces
    std::cout << "Hello " << fullName << "!" << '\n';
    std::cout << "The length of your name is :: " << fullName.length() << '\n';//length() function returns length of string
    return 0;
}
