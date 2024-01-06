#include <iostream>
typedef int number;
typedef std::string text;
//now i can use number as an identifier for int data type instead typing int
//now also i can use text replacing string;
int main()
{
    number num{};//number = int literally
    text word = "Hello";// text = string;
    std::cout << num << " " << word << '\n';//control+d duplicates this
    std::cout << num << " " << word << '\n';//control+d duplicates this
    std::cout << num << " " << word << '\n';//control+d duplicates this
    std::cout << num << " " << word << '\n';//control+d duplicates this
    std::cout << num << " " << word << '\n';//control+d duplicates this
    std::cout << num << " " << word << '\n';//control+d duplicates this
    //but best practice is to use 'using' keyword instead typedef
    return 0;
}
