#include <iostream>
#include <bitset>//for std::bitset
//printing binary bit for the value or decimal or ...

int main()
{
    std::bitset<8> bin1{0b1100'0101};//using 8 bit, std::bitset is like using type;
    std::bitset<8> bin2{0xc5};

    std::cout << bin1 << '\n';
    std::cout << bin2 << '\n';

    //also directly printing creating temporary bitset
    std::cout << std::bitset<8> {0xabc} << '\n';//see no variable used
    return 0;
}
