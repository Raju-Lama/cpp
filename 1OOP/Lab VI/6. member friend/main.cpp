#include <iostream>
//1.	WAP that makes member function of one class friend function of another class.

class Greet;

class GreetFriend
{
    std::string m_name;
public:
    GreetFriend(std::string name)
        :m_name{name}
    {
    }

    void sayName () const
    {
        std::cout << m_name << '\n';
    }

    void callName (const GreetFriend& say,  Greet& hel) const;
    //forward declaration
};

class Greet
{
public:

    void sayHello()
    {
        std::cout << "Hello! ";
    }

    friend void GreetFriend::callName(const GreetFriend& say, Greet& hel ) const ;
    //friend declaration

    //friend of Greet, so, callName can access sayHello,, but, Greet or Greet instance cannot access callName() as
    //this class is not the friend of GreenFriend class
};

void GreetFriend::callName (const GreetFriend& say, Greet& hel) const
//definition
{
    //std::cout << m_name << '\n';
    hel.sayHello();
    //of Greet

    say.sayName();
    //of GreetFriend it self,

}

int main()
{
    GreetFriend person{"Under Taker"};

    Greet sayhello;
    //sayhello.sayHello();
    person.callName(person, sayhello);


    return 0;
}
