#include <iostream>

/*6. Write a program to convert object of class Dollar to object of class Rupee.
Attributes of class Dollar are DI and Cent and that of class Rupee are Rs and Paisa.
(all attributes must have float type)
a. 1$= 100 Cent,
b. 100 Rs = 1$,
c. 100 Paisa = 1 Rs.
*/

//done in two ways,
//conversion routine in source class
//conversion routine in destination class

//we will do the conversion by keeping conversion routine in the source class
//we will use conversion function or overload casting operator function

//This type of conversion is done through overloaded
//casting operator function, also called conversion function.

class Dollar
//destination class
{
public:
    float m_dollar, m_cent;

    Dollar(){}//default constructor

    Dollar(float dol, float cen)
        :m_dollar{dol},
        m_cent{cen}
    {
    }

    void get_dollar()
    {
        std::cout << m_dollar <<  " $ " << m_cent << " Cents\n";
    }


};

class Rupee
//source class
{
public:
    float m_rs, m_paisa;

    Rupee(float rs, float paisa)
        :m_rs{rs},
        m_paisa{paisa}
    {
    }
    Rupee(){}//default constructor


    void get_rupee()
    {
        std::cout << "Rs " << m_rs << " " << m_paisa << " paisa \n";
    }

    operator Dollar()
    //conversion function
    {
        float a, b;
        a = m_rs/100;
        b = m_paisa/100;
        return Dollar(a, b);
    }


};

int main()
{
    Dollar dol100;
    Rupee rupee{1000, 50};

    dol100 = rupee;
    rupee.get_rupee() ;
    dol100.get_dollar();
    return 0;
}
