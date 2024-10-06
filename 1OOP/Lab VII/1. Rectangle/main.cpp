#include <iostream>

/*
    1.	Define a class Rectangle with following specifications;
    a) Data Members:
    i) length
    ii) width
    b) Constructors to assign values to objects
    c) Destructor to destroy object
    d) MemberFunctions:
    i) Area() to find & print the area
    ii) Display() to display length and width.
        Creates String objects with zero length.
        Creates objects with string constants.
    iii) Concatenates two string objects properly.
    iv) Displays a desired string object

*/
class Rectangle
{
private:
    int length;
    int width;

public:

    Rectangle(int l, int w)
        :length{l},
        width{w}
    {
        std::cout << "Object Constructed!\n";
    }
    ~Rectangle()
    //destructor
    {
        std::cout << "Object Destroyed!\n";
    }

    void Display()
    {
        std::cout << "Length :: " << length << '\n' ;
        std::cout << "Width :: " << width << '\n';

    }
    void Area()
    {
        std::cout << "Area of Rectangle :: " << length * width << '\n';
    }

};

int main()
{
    Rectangle first_obj{4, 3};
    first_obj.Area();
    return 0;
}
