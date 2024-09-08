#include <iostream>

//2.	WAP to swap, two private data members of the same class using friend function.

class Swap
{
private:
    int m_x{};
    int m_y{};

public:
    Swap(int x, int y)
        :m_x{x},
         m_y{y}
    {
    }
    void beforeSwap()
    {
        std::cout << "x :: " << m_x << '\t';
        std::cout << "y :: " << m_y << '\n';
    }


    void afterSwap()
    {
        std::cout << "x :: " << m_x << '\t';
        std::cout << "y :: " << m_y << '\n';
    }

    friend void swap(Swap& obj);
};

void swap(Swap& obj)
{
    int temp;
    temp = obj.m_x;
    obj.m_x = obj.m_y;
    obj.m_y = temp;

}
int main()
{
    Swap sw{2, 3};

    sw.beforeSwap();
    swap(sw);
    sw.afterSwap();

    return 0;
}
