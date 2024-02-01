#include <iostream>
//number system
//decimal, binary, octal, and hexadecimal that are popular
int main()
{
    int x{013};//place 0 before the actual number, it prints octal;
    std::cout << "Octal 13 equals to :: " << x << '\n';//prints 11
    //octal counts:: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13 ...
    //it is best to avoid octal..
    int y{0xF};//hexadecimal starts with 0x prefixed. or 0X, but, 0x is better and conventional
    std::cout << "Hexadecimal of 0X13 is :: " << y;
    //hexadecimal numbers are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11...
    return 0;
}
