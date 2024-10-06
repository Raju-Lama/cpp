#include <iostream>
#include <string>
/*
    3.	Define a class String that could work as a user-defined type string type.
    a) Include constructors that enable us:
    i) to create an uninitialized string
    String S1; //string with length 0.
    ii) to initialize an object with a string constant at the time of creation
     like String S2(“Well done!”);
    b) Member function that adds two strings to make a third string.
*/

class String
{
    std::string str{};

public:
    String(const std::string& st)
        :str{st}
    {
    }

    String()
    //default constructor to add
    {
    }

    String addStrings(const String& s2) const
    {
        String s3;
        s3.str = str + s2.str;
        return s3;
    }

    void Display()
    {
        std::cout << str << '\n';
    }

};

int main()
{
    String str1 {"Hello, "};
    String str2 {"World!"};
    String str3 {str1.addStrings(str2)};

    std::cout << "String 1 :: ";
    str1.Display();

    std::cout << "String 2 :: ";
    str2.Display();

    std::cout << "Concatenated Strings :: ";
    str3.Display();
    return 0;
}
