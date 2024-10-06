#include <iostream>
/*
    5.	Define two classes Rupee, and Dollar. Class Rupee has one data member Rs,
    and class Dollar also has one data member Cent.
    Define appropriate constructors in both classes.
    Define a member function Sum() in Rupee class that calculates the total of rupee, and cent
*/

class Dollar;
class Rupee
{
    float Rs{};

public:

    Rupee(float r)
        :Rs{r}
    {
    }

    void Sum(Dollar cen);

};


class Dollar
{
    float Cent{};

public:

    Dollar(float c)
        :Cent{c}
    {
    }

    friend void Rupee::Sum (Dollar cen);
};

void Rupee::Sum(Dollar cen)
{
    std::cout << "The sum of Rupees and Cents is :: " << Rs + cen.Cent/100;
}

int main()
{
    Rupee rupee{45};
    Dollar dollar{45};

    rupee.Sum(dollar);
    return 0;
}
