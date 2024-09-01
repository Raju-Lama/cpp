#include <iostream>
/*
[]()
{
}
*/

/*
[ captureClause ] ( parameters ) -> returnType
{
    statements;
}
*/

//lambda is an anonymous inline function

int main()
{
    auto sayHello = []()
    {
        std::cout << "hello, World!";
    };
    //lambda expression
    //auto type is must,


    sayHello();

    return 0;
}
