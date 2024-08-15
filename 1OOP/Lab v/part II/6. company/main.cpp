#include <iostream>
/*
6. Create a class COMPANY with data members E_name, E_address, E_id. E_id
is a static data member. E_id of the first employee must be 100,
 E_id of second employee 101, 102 and so on. Define member
functions to input, and show the data.
Also, define a static member function Count_Employee() to count
the total number of employees.
*/
#include <iomanip>

class COMPANY
{
    std::string E_name{};
    std::string E_address{};
    static int E_id;// if not constant , initialize out side class
    static int m_count;

public:
    //void setData(std::string_view name, std::string address)
    COMPANY()//default initializer,, when no arguments are passed
    {
    }

    COMPANY(std::string name, std::string address)//constructor
        :E_name{name},
        E_address{address}
        //E_id {id}
    {
      //  E_name = name;
        //E_address = address;
    }

    void Count_Employee()//count number of employee
    {
        ++m_count;
        std::cout << "Count :: " << m_count << '\n' ;
        //return m_count;
    }

    void IdIncrement()//id incrementer
    {
        ++E_id;
    }

    void getData()
    {
        std::cout << "Name :: " << E_name << '\n';
        std::cout << "Address :: " << E_address << '\n';
        std::cout << "Id :: " << E_id << '\n';

        Count_Employee();
        IdIncrement();
    }
};

int COMPANY::E_id = 100; //should initialize outside the class because its private static member
//explicit definition outside the class
//for first employee its default

int COMPANY::m_count = 0;//explicit definition outside the class best practice


int main()
{
    COMPANY em1{"John Cena", "Patan"};
    //em1.setData("John Cena", "Patan");
    em1.getData();
    //std::right;
    std::cout << std::setw(5) << "---" << std::setw(5) << "---" << std::setw(5) << "---" << '\n';

    COMPANY em2{"Under Taker", "Swoyambhu"};
    em2.getData();
    std::cout << std::setw(5) << "---" << std::setw(5) << "---" << std::setw(5) << "---" << '\n';
    //COMPANY counter;
    //std::cout << "Number of employees :: " << counter.m_count;
    COMPANY em3{"Petu", "Kathmandu"};
    em3.getData();
    std::cout << std::setw(5) << "---" << std::setw(5) << "---" << std::setw(5) << "---" << '\n';



    return 0;
}
