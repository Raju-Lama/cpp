#include <iostream>
//literals are the values directly ingested
int main()
{
    std::cout << "Hello world!" << std::endl;//a string literal
    int x{1};//1 is a literal value
    const int aX{x};
    std::cout << x << '\n' << aX;
    return 0;
}
