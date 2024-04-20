#include <iostream>
//copy constructor
class Cppy
{
private:
    int m_nume{0};
    int m_deno{1};

public:
    Cppy( int numerator, int denomenator )
        :m_nume{numerator}, m_deno{denomenator}
    {
    }
};

int main()
{
    Cppy cpy1{4, 2};
    Cppy cpy2{ cpy1 };//now this makes the exact copy as cpy1
    return 0;
}
