#include <iostream>
#include <string>
#include <cstring>

//9. WAP to overload == operator to compare two C-style strings.

class Equalto
{
    char m_str[20];

public:
    /*Equalto(const char value[20])
        :m_str{value}
    {
    }
    */

    void setData()
    {
        std::cout << "Enter string :: ";
        std::cin >> m_str;


        //std::getline(std::cin, m_str, '\0');
        //null as delimiter to end the input, cstyle string ends with a null character
    }

    void getData() const
    {
        std::cout << m_str;
    }

    bool operator == (const Equalto& str2) const
    {
        return strcmp(m_str, str2.m_str) == 0;
    }

};
int main()
{
    Equalto st1;
    Equalto st2;

    st1.setData();
    st2.setData();

    //bool result{ (st1 == st2) };

    if (st1 == st2)
    {
        std::cout << "The strings are equal!";
    }
    else
    {
        std::cout << "The strings are not equal!";
    }


    return 0;
}
