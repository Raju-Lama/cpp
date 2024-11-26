#include <iostream>
/*
8. Create classes called Amount1, Amount2, and Amount3.
Amount1 has data member Rs(float),
Amount2 has data member Paisa(int) and Amount3 has data member Dollars(float).
The classes must be defined in such a way that it is possible to
convert Amount2 into Amount1 and Amount1 into Amount3.
*/
class Amount3
{
public:
    float Dollars;

    Amount3(){}

    Amount3(float dol)
        :Dollars{dol}
    {
    }

    void getDollar()
    {
        std::cout << "$ " << Dollars << '\n';
    }
};

class Amount1
{
public:
    float Rs;
    Amount1(){};

    Amount1(float rs)
        :Rs{rs}
    {
    }

    void getRs()
    {
        std::cout << "Rs " << Rs << "\n";
    }

    operator Amount3()
    //convert ruppee into dollar
    {
        float dol;
        dol = Rs/100;
        return Amount3(dol);
    }

};

class Amount2
{
public:
    int Paisa;
    Amount2(){}

    Amount2(int p)
        :Paisa{p}
    {
    }

    void getPaisa()
    {
        std::cout << Paisa << " Paisa\n";
    }

    operator Amount1()
    //convert paisa into Ruppee
    {
        int rs;
        rs = Paisa/100;
        return Amount1(rs);
    }
};



int main()
{
    Amount1 rs;
    Amount2 paisa{10000};
    rs = paisa;
    //converting amount2 to amount1

    Amount3 dollar;
    dollar = rs;
    //converting amount1 to amount3

    paisa.getPaisa();
    rs.getRs();
    dollar.getDollar();

    return 0;
}
