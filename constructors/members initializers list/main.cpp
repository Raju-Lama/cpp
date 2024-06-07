#include <iostream>
//members initializers list
class Meminit
{
private:
    int m_x{};
    int m_y{};

public:
    Meminit(int x, int y)//constructors
        : m_x{x},
        m_y{y}//this should be in order as members orders in private
    {
    }

    void print()
    {
        std::cout << m_x << m_y << std::endl;
    }
};
int main()
{
    Meminit init{5, 6};
    init.print();
    return 0;
}
