#include <iostream>

//WAP to find the length of string using strlen function,
//strlen() is of <cstring> type,
//it can only read the length of string that is of character type, std::string length cannot be read.
//we have for std::string in <string> of cPP, length() method,,
#include <string>
#include <cstring>

int main()
{
    std::cout << "The length of 'Kathmandu' is " << strlen("Kathmandu");
    std::string str{"Kathmandu"};
    //we cannot read this with strlen, but, use length()
    std::cout << str.length();
    return 0;
}
