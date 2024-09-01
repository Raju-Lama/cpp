#include <iostream>

class Increment
{
    int m_id{2};
public:
    int getId()
    {
        std::cout << m_id << std::endl;
    }

    void operator ++ ()
    {
        ++m_id;
    }
};

int main()
{
    Increment id;
    std::cout << id.getId();
    ++id;
    std::cout << id.getId();
    ++id;
    std::cout << id.getId();

    return 0;
}
