#include <iostream>
#include <string>

using namespace std;

int main()
{
    //for area and circumference of a circle;
    const double PI = 3.14159;//creating constant value for PI
    double radius{};
    cout << "Enter the Radius: ";
    cin >> radius;
    cout <<'\n';
    double area{};
    area = PI * radius * radius;
    double circumference{};
    circumference = 2 * PI * radius;
    cout << "The area of the circle is : " << area << '\n';
    cout << "The circumference of the circle is : " << circumference << '\n';
    return 0;//0 is the value to show the program runs correctly;



}
