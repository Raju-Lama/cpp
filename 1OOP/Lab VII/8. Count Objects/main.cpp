#include <iostream>
/*
    8.	Create a class for counting the number of objects created
    and destroyed within various blocks using constructors and destructors.
*/
class Objects
{
    static int s_count_constructor;
    static int s_count_destructor;

public:

    Objects()
    {
        ++s_count_constructor;
        std::cout << s_count_constructor <<  " Object created!" << '\n';
    }


    ~Objects()
    {
        ++s_count_destructor;
        std::cout << s_count_destructor << " Object destroyed!" << '\n';
    }
};


int Objects::s_count_constructor=0;
int Objects::s_count_destructor=0;


int main()
{
    Objects ob1, obj2, ob3, ob4, ob5, ob6;
    Objects ob7;
    return 0;
}
