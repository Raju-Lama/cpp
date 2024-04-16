#include <iostream>

//class like structure
class Person
{
private://its private by default anyway, its for accessing members
    //its public by default in struct like data structure
    int x{5};
    int id{};
public:
    void print()
    {
        std::cout << x;
    }
};
int main()
{
    Person p;
    p.x = 5;//cannot do this
    p.print();

    return 0;
}
