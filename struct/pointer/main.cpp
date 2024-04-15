#include <iostream>

struct Person
{
    int id{};
    int age{};
    double wage{2.0};
};

int main()
{
    Person p1{1, 29, 3000};//aggregate initialization,

    Person* ptr{&p1};//assigning address of p1 to ptr, both of Person struct type

    std::cout << ptr -> id << '\n';//pointer member selection operator
    std::cout << ptr -> age << '\n';
    std::cout << ptr -> wage << '\n';
    return 0;
}
