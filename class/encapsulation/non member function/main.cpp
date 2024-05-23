#include <iostream>
class Base
{
private:
    int m_value{};

public:
    void setValue (int x)
    {
        m_value = x;
    }

    int getValue() const { return m_value; }
};

void print(const Base& y)
{
    std::cout << "The value is :: " << y.getValue() << '\n';
}

int main()
{
    Base base{};
    base.setValue(5);
    print(base);
    return 0;
}
