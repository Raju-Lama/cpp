#include <iostream>
/*4. WAP to overload unary minus (-) operator to invert sign of data members
of a Point object
(data members X-coordinate, and Y-coordinate) using friend function.
*/

class Point
{
    int X_coordinate{};
    int Y_coordinate{};

public:
    Point(int x, int y)
        :X_coordinate{x},
        Y_coordinate{y}
    {
    }

    Point()
    {
    }

    void getData()
    {
        std::cout << "X-coordinate :: " << X_coordinate << '\t';
        std::cout << "Y-coordinate :: " << Y_coordinate << '\n';
    }

    friend Point& operator - (Point&);

};


Point& operator - (Point& po)
{
    //Point point{0, 0};
    //point.X_coordinate = -po.X_coordinate;
    //point.Y_coordinate = -po.Y_coordinate;
    po.X_coordinate = -po.X_coordinate;
    po.Y_coordinate = -po.Y_coordinate;

    return po;
}


int main()
{
    Point coordinates{2, -3};
    coordinates.getData();

    -coordinates;
    coordinates.getData();

    -coordinates;
    coordinates.getData();

    -coordinates;
    coordinates.getData();

    return 0;
}
