#include <iostream>
//the idea is to use the same method/function of the parent class by other inherited classes.
class Animals
{
public:
    void method() {std::cout << "Animals make sounds!\n";}
};

class Cat : public Animals
{
public:
    void method() {std::cout << "Meow meow!\n"; }//same method is used
};

class Dog : public Animals
{
    public:
    void method() { std::cout << "Bark Bark!\n"; }
};
int main()
{
    Animals pets{};
    Cat pinky{};
    Dog motu{};

    pets.method();
    pinky.method();
    motu.method();

    return 0;
}
