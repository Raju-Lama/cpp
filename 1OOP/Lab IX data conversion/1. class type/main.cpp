#include <iostream>

//1. WAP to convert built-in type to user defined type i.e., class type.
#include <typeinfo>

class Classtype
{
private:
    int intType;
public:
    Classtype(int num)
        :intType{num}
    {
    }

    void getter()
    {
        std::cout << intType;
    }
};

int main()
{
    int num{5};

    Classtype object{num};
    object.getter();

    static_cast<Classtype>(num);
    std::cout << typeid(num).name();

    return 0;
}
