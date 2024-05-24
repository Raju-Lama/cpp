#include <iostream>
#include <string_view>
#include <string>

//multiple inheritance should be avoided in most of the cases
//makes code complex, but, std::cout and std::cin are multiple inheritance too
class Base1
{
private:
    int m_id{};
public:
    Base1(int id)
        :m_id{id}
    {
    }

    int getId() const { return m_id; }
};
class Base2
{
private:
    std::string m_name{};
public:
    Base2(std::string_view name)
        : m_name{name}
        {
        }

    const std::string& getName() const { return m_name; }
};
class Derived : public Base1, public Base2
{
public:

    Derived(int id, std::string name)
        :Base1{id}, Base2{name}
    {
    }
    /*Derived(int id, std::string_view name)
        :m_id{id}, m_name{name}
    {
    }*/

    /*int getId() const { return m_id; }
    const std::string& getName() const {return m_name; }
    */
};


int main()
{
    Derived derived{3, " idiots"};
    std::cout << derived.getId();
    std::cout << derived.getName();
    return 0;
}
