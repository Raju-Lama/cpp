#include <iostream>
/*
5. Define a class STUDENT with following specifications:
a. Data Members
i. name of the student
ii. roll number
iii. address
b. Member Functions
i. To receive data values
ii. To display data of student objects.
*/

class STUDENT
{
private:
    std::string m_name{};
    int m_roll{};
    std::string m_address{};

public:
    void setinfo(std::string name, int roll, std::string address)//setter
    {
        m_name = name;
        m_roll = roll;
        m_address = address;
    }

    void getinfo() //getter
    {
        std::cout << "Name :: " << m_name << '\n';
        std::cout << "Roll :: " << m_roll << '\n';
        std::cout << "Address :: " << m_address << '\n';
    }
};
int main()
{
    std::cout << "Enter your name :: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Enter your roll number :: ";
    int roll{};
    std::cin >> roll;

    std::cin.ignore();//ignore the extraction \n left from above cin's

    std::cout << "Enter your Address :: ";
    std::string address{};
    std::getline(std::cin, address);

    STUDENT std1{};
    std1.setinfo(name, roll, address);
    std1.getinfo();
    return 0;
}
