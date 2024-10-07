#include <iostream>
//10. WAP to overload << insertion operator for user defined type Date.

class Date
{
    int m_real{};
    int m_imag{};

public:

    Date(int real, int imag)
        :m_real{real},
        m_imag{imag}
    {
    }


    friend void operator << (std::ostream& out, Date& com)
    {
        out << com.m_real << " + " << com.m_imag << 'i' << '\n';
    }

    void Display()
    {
        std::cout << m_real << " + " << m_imag << 'i' << '\n';
    }
};


int main()
{
    Date complexNumber{2, 3};
    complexNumber.Display();

    std::cout << complexNumber;
    return 0;
}
