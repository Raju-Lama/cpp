#include <iostream>
#include <string_view>
//when we need only one member to initialize for a class object

class Person
{
private:
    std::string_view  m_name{};
    int m_id{0};//default initialization

public:
    Person(std::string_view name, int id = 0)//id is default, if we only need name, we can only use initialization for name now
        :m_name{name}, m_id{id}
        {
        }


};
int main()
{
    Person p1{"John Cena"};//we only need name
    Person p2{"Under Taker", 1};
    return 0;
}
