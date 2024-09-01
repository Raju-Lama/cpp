#include <iostream>
//capture by value lambda


int main()
{
    int id {10};

    auto printId = [id]()//capture by value lambda
    {
        std::cout << id;
    };

    printId();
    return 0;
}
