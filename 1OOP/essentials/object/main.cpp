#include <iostream>

class EmployeeDetails
{
private:
    std::string m_name;
    int m_id;
    double m_salary;

public:
    void inputData(std::string name, int id, double salary)
    {
        m_name = name;
        m_id = id;
        m_salary = salary;
    }

    void displayData()
    {

    }
};

{

    return 0;
}
