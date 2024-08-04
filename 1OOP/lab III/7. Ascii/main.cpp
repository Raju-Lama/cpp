#include <iostream>
/*
7. Write a function Convert () to find ASCII value of character.
The function takes a char argument and returns the result.
Use a default value % for the argument when this argument is omitted.
Write a main() that gets the character from the user to test the function.
(Default Arguments)
*/
int Convert(char ch='%') //take character return integer for the ASCII
{
    return ch;
}
int main()
{
    std::cout << "Enter a character :: ";
    char ch{};
    std::cin >> ch;

    std::cout << "The ASCII for " << ch << " is :: " << Convert(ch);
    return 0;
}
