#include <iostream>
//7.	wap to show the concept of class friend.
class B;
class A
{
    int m_x{};

public:
    A(int x)
        :m_x{x}
    {
    }

    friend int add(A, B);

};

class B
{
    int m_y{};

public:
    B(int y)
        :m_y{y}
    {
    }

    friend int add(A, B);
};
int add(A x, B y)
{
    return x.m_x + y.m_y;
}

int main()
{
    A obj_x{5};
    B obj_y{3};

    std::cout << "Sum of A and B Object members :: " << add(obj_x, obj_y);
    return 0;
}
