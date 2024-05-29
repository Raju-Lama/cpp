#include <iostream>

//member functions

class Base
{
private:
    int m_id{};

public:
    int getId(int x)
    {
        m_id = x;
        return m_id;
    }
};
int main()
{
    Base id{};
    std::cout << id.getId(5);
    return 0;
}
