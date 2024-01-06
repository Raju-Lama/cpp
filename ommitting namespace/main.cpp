#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your first Name: ";//omitting to use namespace std;
    std::cin >> name;
    std::cout << "\nHello " + name + "!";
    return 0;
}
