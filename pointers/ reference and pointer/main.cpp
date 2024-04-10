#include <iostream>
//pointers and references.
//better to use references while pointer creates more dangling pointers

int main()
{
    int x{5};
    int& y{x};//lvalue reference
    int* ptr{&y};//initializing pointer with
    int* vptr{};//value initialization for null pointer
    int* nulptr{nullptr};//good way to initialize null pointer as it stores garbage value when nothing is there;

    std::cout << *ptr;//dereferencing the pointer value, prints 5
    return 0;
}
