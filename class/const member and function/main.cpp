#include <iostream>

/*
A member function that does not (and will not ever) modify the state
 of the object should be made const, so that it can be called on both const and non-const objects.

*/

class Base
{
public:
    int m_id{};//value initialized

    void print() const//function made const, it shall not modify the member values
    {
            std::cout << m_id;
    }
};
int main()
{
    const Base print{5};//const object member, this can only be accessed with const function
    print.print();
    return 0;
}
