#include <iostream>

void noReturnValue()
{
    std::cout << "I have no return value." << '\n' ;
}
int returnValue()
{
    int num{1};
    return num;
}
int main()
{
    std::cout << returnValue() << '\n' ;//it prints 1;
    /*std::cout << noReturnValue();
    *this returns an effor as there is no return value to print;
    */
    noReturnValue();//prints the text;
    return 0;

}
