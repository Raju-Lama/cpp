#include <iostream>
#include <string.h>//for std::string
int main()
{
    std::string name{"Raju"};
    std::cout << "My name is " << name << '\n';
    name = "Happy";
    std::cout << "My name is " << name << '\n' ;
    name = "fulTanky";
    std::cout << "My name is " << name << '\n' ;
    std::cout << "Enter your full name :: ";
    std::getline(std::cin >> std::ws, name);
    //std::ws tells cin to ignore the white space...
    //std::ws is an input manipulator, used in each getline()
    std::cout << "Your name is " << name << '\n' ;
    return 0;
}
