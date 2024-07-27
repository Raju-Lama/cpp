#include <iostream>
/*
1. Write a program to compute the area of a triangle, a rectangle, square,
and a circle by overloading the Area () function. (Function Overloading)
*/

int Area(int length, int breadth)//for rectangle
{
    return length * breadth;
}

double Area(double base, double height)//for triangle
{
    return (1/2) * base * height;
}

float Area(float sq)//for square
{
    return sq * sq;
}

double Area(double radius)//for circle
{
    return 3.1415 * radius * radius;
}

int main()
{
    std::cout << "The area of rectangle is :: " << Area(2, 4) << std::endl;


    return 0;
}
