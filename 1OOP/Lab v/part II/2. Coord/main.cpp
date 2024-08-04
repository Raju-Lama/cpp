#include <iostream>
/*
2. Create a class called Point with two data members X-coordinate,
and Y-coordinate. Construct different
member functions with the following operations.
a. To input data for Point objects.
b. To show the data of Point objects.
c. Member function to find distance between two Points.
*/
#include <math.h>
//overload operator -
class Point
{
private:
    int m_xcoor{};
    int m_ycoor{};

public:
    void setData(int x, int y)
    {
        m_xcoor = x;
        m_ycoor = y;
    }
    void getData()
    {
        std::cout << "(x, y) = " << "(" << m_xcoor << ", " << m_ycoor << ")\n";
    }

    Point operator - (Point x2)//overload - operator x2 or y2 it is same
    {
        Point x1; //or y1 as it is same
        x1.m_xcoor = pow(m_xcoor - x2.m_xcoor, 2); //(x2-x1)^2
        x1.m_ycoor = pow(m_ycoor - x2.m_ycoor, 2); //  (y2-y1)^2
        return x1;
    }

    void distance()
    {

        std::cout << "Distance :: "  << sqrt(m_xcoor + m_ycoor) << '\n';
    }

};

int main()
{
    Point x{}, y{};
    x.setData(8, 8);//value set(x1, x2)
    y.setData(5, 4);//y1(,y2)

    Point dist{x - y};//add

    x.getData();//display data
    y.getData();//display data


    dist.distance(); //measure distance and show


    return 0;
}
