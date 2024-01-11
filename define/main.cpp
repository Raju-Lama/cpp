#include <iostream>

#define My_Name "Raju"// not a statement, but, this is used to name an identifier/ like creating data type in 'c/

void foo()
{
#define Last_Name "Good"//this doesn't make any sense, as define is preprocesor section taht doesn't understand the syntax of c++
//it can be compiled and run
    std::cout << "This is another function.\n";
}

int main()
{
    std::cout << My_Name << '\n';
    std::cout << Last_Name << '\n';
    foo();
    return 0;
}
