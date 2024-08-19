#include <iostream>
//static variables and functions belong to Class not an object basically
//hence, we need not create any objects to access them,
//simply access the static members or methods using class_name::variable/functionname;
//best practice do not access static with objects, its changeable, so

class Stat
{
private:
    static std::string m_name;
    static int m_id;

public:
    static void giveName(std::string nam)
    {
        m_name = nam;
    }

    static void callName()
    {
        std::cout << "Name :: " << m_name << '\n';
    }

    static void callId()
    {
        std::cout << "Id :: " << m_id << '\n';
    }
};

std::string Stat::m_name; // define only, or initialize too
//cannot initialize the private member
int Stat::m_id {3};//or  initialize even if its private


int main()
{
    Stat::giveName("Petu");

    Stat::callName();

    Stat::callId();

    return 0;
}
