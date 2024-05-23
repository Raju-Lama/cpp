#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "This is A" << '\n' ;
    }
};

class B : public A
{
public:
    B()
    {
        std::cout << "This is class B" << '\n' ;
    }
};

class C : public B
{
public:
    C()
    {
        std::cout << "This is class C" << '\n' ;
    }
};

class D : public C
{
public:
    D()
    {
        std::cout << "This is class D" << '\n' ;
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    return 0;
}
