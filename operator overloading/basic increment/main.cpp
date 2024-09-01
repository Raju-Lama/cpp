#include <iostream>

class Increment
{
    int m_id{2};
public:
    void operator ++ () //default parameter is *this pointer object of Increment
    //member function is used for unary operator overloading,
    //use friend function for binary operators overloading
    {
        ++m_id;
    }

    //or use Increment return type, and return simply ++m_id
    //by default, its member function type, and the default is *this arugement


    void getId()
    {
        std::cout << m_id << std::endl;
    }
};

int main()
{
    Increment id;
    id.getId();
    ++id;
    id.getId();
    ++id;
    id.getId();

    return 0;
}
