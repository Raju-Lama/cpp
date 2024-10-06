#include <iostream>
/*
    4.	Define a class Distance with following specifications
    a. Data Members;
        i. Inch     ii. Feet

    b. Constructors to assign values

    c. Member Functions;
        i. Compare() to compare two distance objects and
    returns the result as object     ii. Display() to display result

*/
class Distance
{
    int Feet{};
    int Inch{};
    //1 feet = 12 inch

public:

    Distance(int ft, int in)
        :Feet{ft},
        Inch{in}
    {
    }

    Distance()
    //default constructor
    {
    }

    void Display()
    {
        std::cout << "Feet :: " << Feet;
        std::cout << "  Inch :: " << Inch << '\n';
    }


    Distance Compare(Distance c2)
    {
        Distance c3;
        /*
        c3.Feet = Feet - c2.Feet;
        return c3;
        //only difference
        */

        if (Feet > c2.Feet)
        {
            c3.Feet = Feet;
            c3.Inch = Inch;
        }
        else
        {
            c3.Feet = c2.Feet;
            c3.Inch = c2.Inch;
        }

        return c3;
    }
};

int main()
{
    Distance obj1{4, 3};
    Distance obj2{3, 2};
    Distance cmp{obj1.Compare(obj2)};

    std::cout << "Distance 1 :: ";
    obj1.Display();
    std::cout << "Distance 2 :: ";
    obj2.Display();

    std::cout << "\n\n\nGreatest   :: ";
    cmp.Display();
    return 0;
}
