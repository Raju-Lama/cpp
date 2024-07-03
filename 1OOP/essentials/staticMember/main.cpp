#include <iostream>
//using static keyword
class Static
{
public:
    static int s_var;//only declared like forward declaration
};
//using scope resolution operator to initialize
/*
Best practice
Access static members using the class name and the scope resolution operator (::).
*/
/*
When we declare a static member variable inside a class type,
we’re telling the compiler about the existence of a static member variable,
but not actually defining it (much like a forward declaration).
Because static member variables are essentially global variables,
 you must explicitly define (and optionally initialize)
  the static member outside of the class, in the global scope.
*/
int Static::s_var{1};
//initializing with value 1//or defines static member variable


int main()
{
    Static::s_var = 2;//preferred method of accessing static variables
    std::cout << Static::s_var;
    return 0;
}
