#include <iostream>
//using class to make the enum limited to its class scope.

int main()
{
    enum class Fruits
    {
        apple,
        orange,
        banana,
    };
    Fruits fruit{Fruits::orange};
    std::cout << "My favorite is " ;
    std::cout << static_cast<int>(fruit);//as it doesn't convert into integer type directly with class scope
    return 0;
}
