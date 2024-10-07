#include <iostream>
//1. WAP to overload pre-increment operator (++) for Complex number.
//note: increment both real and imaginary part

class Complex
{
    int m_real;
    int m_imag;

public:
    Complex(int r, int i)
        :m_real{r},
        m_imag{i}
    {
    }

    Complex()
    //default constructor
    {
    }


    Complex operator ++ ()
    {
        Complex com{0,0};
        //uses default constructor
        com.m_real = ++m_real;
        com.m_imag = ++m_imag;
        return com;
    }


    void getComplex()
    {
        std::cout << m_real << " + " << m_imag << 'i' << '\n';
    }

};

int main()
{
    Complex complex_number{2, 3};

    complex_number.getComplex();

    ++complex_number;
    complex_number.getComplex();

    ++complex_number;
    complex_number.getComplex();

    return 0;
}
