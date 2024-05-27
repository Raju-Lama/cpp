#include <iostream>

//heap memory management with pointer, its a bit slow than the call stack

int main()
{
    int* heap{ new int{5} };
    std::cout << *heap << '\n';

    delete heap;//free memory mannually
    heap = nullptr;

    std::cout << *heap ;


    return 0;
}
