#include <iostream>
/*
6. Create a namespace called COLLECTION that contains two structures NC, and AC. NC with data
member’s Rs, and Paisa. Structure AC with data members Dollar, and Cent. Construct member functions
for the following operations in each structure.
a. To input data.
b. To show the data.
Define an external function Conversion (), that takes two arguments; first argument of type NC, and
second argument of type AC, and finds the total amount in Rupees (Structure in C++).
Given,
1 Dollar = 100 Rs.
*/
namespace COLLECTION
{
    struct NC //nepali currency
    {
        double m_Rs{0};
        double m_Paisa{0};

        void setRupee(double rs,double paisa)
        {
            m_Rs = rs;
            m_Paisa = paisa;
        }

        void getRupee()
        {
            std::cout << "Rs :: " << m_Rs << " Paisa :: " << m_Paisa << '\n';
        }
    };

    struct AC //american currency
    {
        double m_Dollar{0};
        double m_Cent{0};

        void setDollar(double dollar, double cent)
        {
            m_Dollar = dollar;
            m_Cent = cent;
        }

        void getDollar()
        {
            std::cout << "Dollar :: " << m_Dollar << " Cent :: " << m_Cent << '\n';
        }
    };




}

void Conversion(COLLECTION::NC rup, COLLECTION::AC dol, int option)
{
    //converting into Total Rupees amount according to the question.
    if (option == 1)
    {
        rup.m_Rs = dol.m_Dollar * 100 + dol.m_Cent;//converting into Rupee from Dollar
        std::cout << dol.m_Dollar << " $ == Rs. " << rup.m_Rs << '\n';
    }
    else
    {
        dol.m_Dollar = rup.m_Rs / 100 + rup.m_Paisa;//converting into Dollar from Rupee
        std::cout << dol.m_Dollar << " $ == Rs. " << rup.m_Rs << '\n';
    }
}


int main()
{
    COLLECTION::NC nepaliRupee{};
    COLLECTION::AC americanDollar{}; //struct object

    std::cout << "Choose options :: 1. Dollar into Rupee    2. Rupee into Dollar :: ";
    int option{};
    std::cin >> option;

    if (option == 1)
    {
        std::cout << "Enter Dollar :: ";
        double dol{};
        std::cin >> dol;

        std::cout << "Enter Cent :: ";
        double cent{};
        std::cin >> cent;

        //pass dollar and to convert
        americanDollar.COLLECTION::AC::setDollar(dol, cent);//pass actual arguements
        Conversion(nepaliRupee, americanDollar, option);//converting dollar into rupee
        americanDollar.COLLECTION::AC::getDollar();//and displaying,
    }

    else if (option == 2)
    {
        std::cout << "Enter Rupee :: ";
        double rup{};
        std::cin >> rup;

        std::cout << "Enter Paisa :: ";
        double paisa{};
        std::cin >> paisa;

        nepaliRupee.COLLECTION::NC::setRupee(rup, paisa);
        Conversion(nepaliRupee, americanDollar, option);//converting dollar into rupee
        nepaliRupee.COLLECTION::NC::getRupee();
    }

    else
    {
        std::cout << "Invalid option!\n";
    }

    return 0;
}
