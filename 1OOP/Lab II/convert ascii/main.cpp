#include <iostream>
//5. WAP that inputs an ASCII value from the
//keyboard and displays its corresponding character on the screen.
//(Type Conversion)

int main()
{//type conversion of data with static_cast<type>(name)
    std::cout << "Enter the ASCII key :: ";
    int ascii{};
    std::cin >> ascii;

    if(ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122)
        std::cout << static_cast<char>(ascii);
    else
        std::cout << "The entered ascii is not valid for a character!";
    return 0;
}
