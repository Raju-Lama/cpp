#include <iostream>
//5. WAP to overload <= operator.

class LessEqualTo
{
    int m_rank{};

public:
    LessEqualTo(int r)
        :m_rank{r}
    {
    }

    LessEqualTo()
    {
    }

    int getData()
    {
        return m_rank;
    }

    LessEqualTo operator <= (LessEqualTo op2)
    {
        LessEqualTo op3;
        op3.m_rank = (m_rank <= op2.m_rank) ? true : false;
        return op3;
    }
};


int main()
{
    LessEqualTo value1{6};
    LessEqualTo value2{7};



    LessEqualTo result{ value1 <= value2 };

    int what = result.getData();

    if (what == 1)
    {
        std::cout << value1.getData() << " <= " << value2.getData() << " :: True \n";
    }
    else
    {
        std::cout << value1.getData() << " <= " << value2.getData() << " :: False \n";
    }
    return 0;
}
