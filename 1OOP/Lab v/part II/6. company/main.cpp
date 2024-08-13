#include <iostream>
/*
6. Create a class COMPANY with data members E_name, E_address, E_id. E_id
is a static data member. E_id of the first employee must be 100,
 E_id of second employee 101, 102 and so on. Define member
functions to input, and show the data.
Also, define a static member function Count_Employee() to count
the total number of employees.
*/

class COMPANY
{
    std::string E_name{};
    std::string E_address{};
    static int E_id;// if not constant , initialize out side class
    static int m_count;

public:
    //void setData(std::string_view name, std::string address)

    COMPANY(std::string name, std::string address, int id)//constructor
        :E_name{name},
        E_address{address},
        E_id {id}
    {
      //  E_name = name;
        //E_address = address;
        ++m_count;
    }

    void getData()
    {
        std::cout << "Name :: " << E_name << '\n';
        std::cout << "Address :: " << E_address << '\n';
        std::cout << "Id :: " << E_id << '\n';
    }

    static int Count_Employee()
    {

        return m_count;
    }
};

//COMPANY::E_id = 100; //should initialize outside the class because its private static member

int main()
{
    COMPANY em1{"John Cena", "Patan", 100};
    //em1.setData("John Cena", "Patan");
    em1.getData();
    em1.Count_Employee;

    COMPANY em2{"Under Taker", "Swoyambhu"};
    em2.getData();

    std::cout << em2.Count_Employee;

    return 0;
}
