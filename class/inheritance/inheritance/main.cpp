#include <iostream>
#include <string>
#include <string_view>
//inheritance
class Parent
{
public:
    std::string m_name{};
    int m_id;

    Parent(std::string_view name = "", int id = 0)//constructor
        :m_name{name}, m_id{id}
    {
    }

    const std::string getName() const {return m_name; }
    int getId() const {return m_id;}

};

class Child : public Parent//inherits from Parent
{
public:
    std::string_view job{};
    std::string_view organization{};
};

int main()
{
    Child child1{};
    child1.m_name = {"John Cena"};
    std::cout << child1.getName();
    return 0;
}
