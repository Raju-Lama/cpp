#include <iostream>

//this is outdated and is not a good practice now
#define MY_NAME "Raju"// not a statement, but, this is used to name an identifier/ like creating data type in 'c/
//preprocessor directive are  without semicolon;
void foo()
{
#define LAST_NAME "Good"//this doesn't make any sense, as define is preprocesor section taht doesn't understand the syntax of c++
//it can be compiled and run
    std::cout << "This is another function.\n";
}

int main()
{
    std::cout << MY_NAME << '\n';
    std::cout << LAST_NAME << '\n';
    foo();
    return 0;
}
