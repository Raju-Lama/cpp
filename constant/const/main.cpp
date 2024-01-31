#include <iostream>
//use of constant keyword, not data type
//prefer way is to put const before type
//it should be initialed while declaring
//the value later cannot be altered
int main()
{
    const double GRAVITY{9.8};//m/s // this is a preferred way to declare constant
    double const PI{3.14159};// this is also allowed, but, not preferred;
    std::cout << "Earth's Gravity :: " << GRAVITY << " m/s" << std::endl;
    std::cout << "Pie's value :: " << PI << std::endl;
    return 0;
}
