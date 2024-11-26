#include <iostream>
#include <string>
// WAP that illustrates the concept of constructors and destructors during inheritance.
//lets see a multilevel inheritance

class A
{
public:
    int m_id;
    std::string m_which_class;

    A()
    {
    }
    //now derrived classes much have constrctors too
    A(int id, std::string which)
        :m_id{id},
        m_which_class{which}
    {
        std::cout << "A constructor called from class : ";
        std::cout << m_which_class << '\n';
    }

    ~A()
    //destructor
    {
        std::cout << "Destruct A!" << '\n';
    }

};

class B : public A
{
public:
    int score;

    B()
    {
    }

    //we also need the parameterized constructor
    B(int scor, int identity, std::string which_class)
        :score{scor},
        A(identity, which_class)
        //for constructor class of Base
    {
        std::cout << "B constructor called from class : ";
        std::cout << m_which_class << '\n';
    }

    ~B()
    {
        std::cout << "Destruct B!" << '\n';
    }
};

class C : public B
{
public:
    C()
    {
    }

    C(int scor, int id, std::string which)
   // C(int scor)
        :B(scor, id, which)
        //calls B's constructor
    {
         std::cout << "C constructor!" << '\n';
    }

    ~C()
    {
        std::cout << "C Destructed!" << '\n';
    }
};

int main()
{
    C c_object{101, 1, "C constructor"};
    return 0;
}
