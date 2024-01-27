#include <iostream>
//inputing a character,
int main()
{
    std::cout << "Enter a character :: ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered :: " << ch << '\n';
    std::cin >> ch;//it doesn't ask user to input further, but, it inputs itself
    //the inputted is a queued character, eg, if a is entered 1st,, now, b, c, d, ... are queued.
    std::cout << "This is not inputted, but, queued after the previous input :: " << ch;
    return 0;

}
