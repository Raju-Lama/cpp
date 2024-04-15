#include <iostream>
#include <string>
//struct aggregate initialize
struct Person
{
    int id{};
    std::string name{};
    double wage{};
};

int main()
{
    Person p1{1, "John Cena", 200.0};
    std::cout << p1.id << " \n";//member selection operator '.' period.
    std::cout << p1.name << '\n';
    std::cout << p1.wage << '\n';
    return 0;
}
