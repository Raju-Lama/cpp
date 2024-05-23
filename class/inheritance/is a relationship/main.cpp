#include <iostream>
#include <string>
class fruit
{
public:
    std::string m_shape{};
};

class type : public fruit
{

};
int main()
{
    type apple{};
    apple.m_shape = "round";
    std::cout << apple.m_shape;
    return 0;
}
