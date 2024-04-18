#include <iostream>
//constructure to initialize entire members of a class//
//it doesn't have any return type or void type for the return value

class Construct
{
    int m_x{};
    int m_y{};

public:
    Construct(int x, int y)
    //same name as the class name,
    {
        std::cout << x << '\n' << y;
    }
};

int main()
{
    Construct initialize(4, 5);//initializing class private member variable all at once.
    return 0;
}
