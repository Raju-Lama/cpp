#include <iostream>
//diamond problem is when both heirarchical and multiple inheritance is used
class A
{
public:
    void show()
    {
        std::cout << "Show A\n";
    }
};

class B : virtual public A
//or public virtual A
//now only one show is inherited from A to all the Childs in heirarchical and multiple inheritence
{
public:

    void print()
    {
    }

};

class C: virtual public A
{
public:

    void get()
    {

    }
};

//show() is inherited by both B and C class, but, which
//show does D inherit?
//so we put virtual word while inheriting A class in B and C
class D: public B, public C
{
public:
    void bigshow()
    {

    }
};

int main()
{
    D d;
    d.show();
    //show is ambiguous without virtual
    return 0;
}
