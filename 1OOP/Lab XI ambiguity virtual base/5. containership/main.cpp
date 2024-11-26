#include <iostream>

// 5. WAP to illustrate the concept of containership
// this is inheritance having 'has a' relationship
//it means creating nested class or having object of another class to the class of a class
//also known as aggregation
class Base
{
public:
    int m_id;

    Base(int id)
        :m_id{id}
    {
    }

    Base(){}//default constructor

    void getId()
    {
        std::cout << "Id : " << m_id << '\n';
    }

};

class Container
{
public:
    int m_score;
    Base base_object;
    //object of another class, has a relation

    Container(){}

    Container(int score, int id)
        :m_score{score},
        base_object{id}
    {
    }

    void get_values()
    {
        std::cout << "Score : " << m_score << '\n';
        //std::cout << "Id : " << base_object.m_Id << '\n';
        base_object.getId();
       // std::cout << "Score with object : " << base_object.m_score << '\n';
    }
};

int main()
{
    Container contain{30, 101};
    contain.get_values();
    return 0;
}
