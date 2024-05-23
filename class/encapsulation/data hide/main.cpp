#include <iostream>
class Base
{
public:
    int m_id{};

    int getId() const { return m_id; }
};

class Derived : public Base
{
private:
    using Base::getId;//no prenthesis

public:
    Derived (int value)
        : Base {value}
    {}
};

int main()
{
    Derived derived{2};
    //std::cout << derived.getId();//cannot do this now, this is private
    return 0;
}
