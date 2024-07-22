#include <iostream>
#include <string>

std::string replaceVowels(std::string str, char ch)
{
    //strings are not immutable in c++, c...
    //but, they are immutable in python, so there, we have to create dictionary
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str [i]=='o' || str[i]=='u'||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str [i]=='O' || str[i]=='U')
        {
            str[i] = ch;
            continue;
        }
    }
    return str;//new string here,
}

int main()
{
    std::cout << replaceVowels("hello", '*') << std::endl;
    return 0;
}
