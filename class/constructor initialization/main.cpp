#include <iostream>
//initialize aggregate values using constructor

class Construct
{
private:
    int m_x{};
    int m_y{};

public:
    Construct(int x, int y)
        : m_x{x},//private member now initialized
          m_y{y}
    {
        //this can be lest empty,
        std::cout << "x :: " << x << "\n y :: " << y;
    }

    void print()
    {
        std::cout << "\n m_x :: " << m_x << "\n m_y:: " << m_y;
    }
};

int main()
{
    Construct initialize {3, 5};
    initialize.print();
    return 0;
}
