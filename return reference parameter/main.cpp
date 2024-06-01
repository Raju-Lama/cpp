#include <iostream>
#include <string>
//return reference parameter
const std::string& returnRefParameter( const std::string& str={"programming"} )
{//constant value must be initialized
    return str;
}

int main()
{
    std::cout << returnRefParameter();
    return 0;
}
