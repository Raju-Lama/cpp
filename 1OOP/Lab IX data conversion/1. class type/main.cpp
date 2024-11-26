#include <iostream>

//1. WAP to convert built-in type to user defined type i.e., class type.
#include <typeinfo>

//using conversion constructor from basic built in type to class type


class Classtype
{
private:
    int intType;
public:
    Classtype(){}
    //default constructor

    Classtype(int num)
        :intType{num}
    {
    }

    void getter()
    {
        std::cout << intType << '\n';
    }
};

int main()
{
    int num{5};

    Classtype object{num};
    //num is converted into class type by passing as a parameter
    //using constructor
    Classtype class_type;
    class_type = num;

    object.getter();
    class_type.getter();
    //num = static_cast<Classtype>(num);
    std::cout << typeid(object).name()<< '\n';
    //name() method to see the type

    std::cout << typeid(class_type).name();

    return 0;
}
