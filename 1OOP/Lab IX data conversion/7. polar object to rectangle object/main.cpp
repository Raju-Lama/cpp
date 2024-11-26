#include <iostream>

/*
7. Define two classes Polar and Rectangle to represents points in
the polar and rectangle system, where;
x = r cos a
y = r sin a.
Write a conversion routine to convert object of
 class Polar to object of class Rectangle.
*/
//we do rectangle to polar instead,
/*
r is constant value greater or equal to zero
a is alpha or angle, value 0 <= a <= 360 degree
*/

#include <cmath>
//for cos() and sin() radians functions

class Polar
//destination class
{
    public:
    int r_sin_a, r_cos_a;
    Polar(int sin, int cos)
        :r_sin_a{sin},
        r_cos_a{cos}
        //polar values
        {
        }
    Polar(){}//default constructor

    void getPolars()
    {
        std::cout << "rsina: " << r_sin_a << " rcosa: " << r_cos_a << '\n';
    }
};

class Rectangle
//sourc class
{
    public:
    int x, y;
    Rectangle(){}//default constructor

    Rectangle(int a, int b)
        :x{a},
        y{b}
    {
    }

    void getValues()
    {
        std::cout << "x : " << x << " y : " << y << "\n\n";
    }

    //conversion function
    operator Polar()
    {
        int a, b;
        a = x * sin(y);
        b = x * cos(y);
        return Polar(a, b);
    }
};

int main()
{
    Polar p;
    Rectangle rec{2, 4};
    p = rec;

    p.getPolars();
    rec.getValues();
    return 0;
}
