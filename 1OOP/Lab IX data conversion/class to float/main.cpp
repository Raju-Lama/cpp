#include <iostream>
//2. Write a conversion routine for converting class type Distance to basic type float.
class Distance
{
public:
    int distance{};
};
int main()
{
    Distance integer;
    integer.distance = 5;
    float distFloat{integer.distance};
    std::cout << distFloat;
    return 0;
}
