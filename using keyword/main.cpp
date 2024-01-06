#include <iostream>

/*instead of using typedef to declare a new identifier for the datatype, we can do
*this with 'using' keyword
*/
using text = std::string;
using number = double;
int main()
{
    text str = "love";
    number num{100.0001};
    std::cout << str << '\n' << num;
    return 0;
}
