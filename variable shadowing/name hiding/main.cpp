#include <iostream>
//variable shadowing or name hiding
//hiding global scope inside a nested scope
//it is best to avoid this practice.
int main()
{
    int value{10};
    {
        int value{5};
        std::cout << value << std::endl;//prints 5
    }//the nested value ends here
    std::cout << value << '\n';//prints 10
    return 0;
}
