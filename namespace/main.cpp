#include <iostream>

//creating a name space,
namespace first{
    int x{1};
}
namespace second{
    int x{2};
}

int main()
{
    /*cannot declare variable twice, each identifier must be unique, but,
    *namespace helps out to enter single name for different value
    */
    int x{5};
    //int x[} cannot be created again, instead using namespace for such creation of x in the globle scope;
    std::cout << x << '\n';//prints value 5 from the main function;
    std::cout << first::x << '\n' ;//uses value of namespace first
    std::cout << second::x << '\n' ;//uses value of namsspace second
    return 0;
}
