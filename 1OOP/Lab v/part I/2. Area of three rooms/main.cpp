#include <iostream>
/*
2. Define a class ROOM with following specifications:
a. Data Members
i. Length
ii. Width
b. Member Functions
i. setdata() to assign initial values
ii. display() to display values
iii. area() to find and display the area.
Your program should calculate the areas of three Rooms; R1, R2, R3.
*/
class ROOM
{
private:
    float m_length{};
    float m_width{};

public:
    void setdata(float len, float wid)
    {
        m_length = len;
        m_width = wid;
    }

    void display()
    {
        std::cout << "Length :: " << m_length <<
         "  Breadth :: " << m_width << '\n';
    }
    void area()
    {
        std::cout << "Area :: " << m_length * m_width << '\n';
    }
};
int main()
{
    ROOM R1{}, R2{}, R3{};
    R1.setdata(20, 40);
    R1.display();
    R1.area();

    R2.setdata(10, 20);
    R2.display();
    R2.area();

    R3.setdata(30, 50);
    R3.display();
    R3.area();


    return 0;
}
