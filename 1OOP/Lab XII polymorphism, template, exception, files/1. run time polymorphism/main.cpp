#include <iostream>
//1. Write a program to show the run time polymorphism.
//run time polymorphism is achieved through virtual function in the base class
//for making it an abstract class (pure virtual function)
//should use base pointer to access the derived class overridden virtual function
class Base
{
public:
    int m_id;

    Base(int id) : m_id{id} {}

    virtual void tellStory() = 0;
    //pure virtual function
};
class Derived : public Base
{
public:
    Derived(int id)
        :Base(id)
    {
    }

    void tellStory()
    //override this function / define the function
    {
        std::cout << "Id : " << m_id << '\n';
        std::cout << "This is the overridden function from Derived Class!\n\n";
    }
};

int main()
{

    Derived child_object{101};

    //create pointer for Base
    Base *base_ptr{&child_object};

    base_ptr->tellStory();
    //access with arrow

    Derived child_object_2{102};
    base_ptr = &child_object_2;
    //points to another object now.
    //so the concept is there are multiple objects from many classes, but, use
    //the same pointer to point the object functionality

    base_ptr->tellStory();

    return 0;
}

