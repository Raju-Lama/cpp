#include <iostream>
// 3. WAP to overload post-increment operator (++).

class PostIncrement
{
    int m_i;

public:
    PostIncrement(int i)
        :m_i{i}
    {
    }

    void operator ++(int)//the int is not integer, but, to tell, this is a post increment
    {
        m_i++;
    }

    void getValue()
    {
        std::cout << m_i << '\n';
    }

};
int main()
{
    PostIncrement num_obj{1};

    num_obj.getValue();
    num_obj++;

    num_obj.getValue();
    num_obj++;

    num_obj.getValue();
    num_obj++;

    return 0;
}
