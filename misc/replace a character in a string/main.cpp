#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string replaceIt{"Dove Dove Dove"};
    std::cout << "Before replacing :: " << replaceIt << std::endl;
    //or use removeif(str.begin(), str.end(), ifspace); to remove space

    std::replace(replaceIt.begin(), replaceIt.end(), 'D', 'L');
    std::cout << "After replacing :: " << replaceIt << std::endl;

    return 0;
}
