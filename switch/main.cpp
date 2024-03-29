#include <iostream>
void swi(int);

int main()
{
    swi(3);
    return 0;
}
void swi(int x)
{
    switch(x)
    {
    case 1:
        std::cout << 1;
        break;
    case 2:
        std::cout << 2;
        break;
    case 3:
        std::cout << 3;
        break;
    default:
        std::cout << "End of case";
    }
}
