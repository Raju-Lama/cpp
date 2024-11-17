#include <iostream>
//multiple inheritance,
//resolving ambiguity using scope object.class::function/data;
class A
{
public:

    void show()
    {
        std::cout << "A class\n";
    }
};

class B
{
public:
    void show()
    {
        std::cout << "Class B\n";
    }
};

class C : public A, public B
{
public:
    //show() is inherited from both A and B class to C
    void print()
    {
        std::cout << "Class C\n";
    }
};
int main()
{
    C c;
    //c.show();
    //ambigous;

    c.A::show();
    c.B::show();
    //access this way instead
    return 0;
}
