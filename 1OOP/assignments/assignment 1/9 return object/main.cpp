#include <iostream>
//9.Write a program to demonstrate returning objects from functions in C++.
class Class1
{
    private:
        int m_id{};

    public:
        Class1(int pass)
            : m_id{pass}
            {
                std::cout << "constructed!\n";
            }


        int getId() { return m_id; }

};

class Class2
{
};

int main()
{
    Class1 obj1{5};
    std::cout << obj1.getId();
    return 0;
}
