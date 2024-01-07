#include <iostream>

//user-defined functions created outside main function, makes codes reusable,
//we cannot create a nested function, we cannot create another function inside main function.
void newFunction()
{
    std::cout << "We are in the newFunction()\n";
}
void foo()
{
    std::cout << "We are in the foo() function.\n";
    newFunction();//calls newFunction();
    std::cout << "We are in the foo() function again.\n";
}
int main()
{
    /*
    * void foo()
    *{
    *   std::cout << "we cannot do this.";
    *}
    * we cannot use a function inside main();
    */
    //this is a function caller as it is executed in the beginning;
    std::cout << "We are in the main() function.\n";
    foo();//calls foo(), foo() then calals newFunction(), then it comes to this point again.
    //starts over from this point now;
    std::cout << "We are in the main() function back again.\n";
    return 0;

}
