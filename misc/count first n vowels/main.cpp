#include <iostream>
//print first n vowels in a string,,,
std::string getFirstNVowels(std::string str, int n) {
    std::string strings;
    int count{0};
    for(int i = 0; str[i] != '\0'; i++)
    {
        if ( str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            if (count < n)
             {   count++;
                strings += str[i];}
        }
    }
    return strings;
}

int main()
{
    std::cout << getFirstNVowels("Hello World", 3) << std::endl;
    return 0;
}
