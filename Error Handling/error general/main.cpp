#include <iostream>

int main()
{
    //zeroDivisionError
    //division by zero
    //try, throw, catch

    try
    {
        int a{2}, b{0};
        if(b==0)
        {
            throw "division by zero";
        }
        int c {a/b};
        std::cout << c;

    }
    catch(const char* error)
    {
        std::cerr << error;
        //cerr or cout
    }
    return 0;
}
