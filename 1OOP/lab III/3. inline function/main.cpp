#include <iostream>
/*
3. Find the area of rectangle in which length and width provided by user
and display the content. Make use of inline function.(Inline Function)
*/
inline double Area(double x, double y)
{
    return x * y;
}
int main()
{
    std::cout << "Enter the length :: ";
    double length{};
    std::cin >> length;
    std::cout << "Enter the breadth :: ";
    double breadth{};
    std::cin >> breadth;
    std::cout << "The area is :: " << Area(length, breadth) << std::endl;
    return 0;
}
