#include <iostream>

//only boolean values representation techniques.
int main()
{
    bool value1{true};//lower case only
    bool value2{false};
    bool defaultInitialization{};
    std::cout << "true :: " << value1 << '\n' << "false :: "<< value2 << '\n';
    //reverse value with using ! operator in boolean values
    bool value3{!true};
    bool value4{!false};
    std::cout << "!true :: " << value3 << '\n' << "!false :: "<< value4 << '\n';
    std::cout << "Default Initialization bool value :: " << defaultInitialization << '\n';
    //if want to show true and false, use std::cout << std::boolalpha;
    //std::cout:: << std::boolalpha;
    std::cout << "true :: " << true << '\n' << "false :: " << false << '\n';
    //input std::cin >> input only boolean 1 or 0, but, not true or false
    return 0;
}
