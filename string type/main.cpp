#include <iostream>
#include <string>// for the use of std::string
//string is a fundamental class type
int main()
{
    std::string name{};//an empty string prints nothing
    std::cout << "An empty string :: " << name << '\n';
    std::string name1{"Horse"};
    std::cout << "Name1 :: " << name1 << '\n';
    std::cout << "Enter your name :: ";
    std::string name2{};
    std::cin >> name2;//it breaks on white space
    std::cout << "Hello " << name2 << "!" << '\n';
    return 0;
}
