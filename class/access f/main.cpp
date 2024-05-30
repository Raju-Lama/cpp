#include <iostream>
class Base
{
private:
    int m_id{};
public:
    void setId(int id) {m_id = id;};

    int getId() const { return m_id; }
};
int main()
{
    Base b{};
    b.setId(5);
    std::cout << b.getId();
    return 0;
}
