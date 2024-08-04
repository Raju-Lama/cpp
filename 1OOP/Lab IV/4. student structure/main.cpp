#include <iostream>
/*
4. Define a structure STUDENT with data members name, roll, and total_marks.
Use appropriate member functions to initialize, and display the data.
 Also define a member function that calculates the percentage
of total_marks, based on full marks supplied by the user (Structure in C++).
*/

struct STUDENT
{
    std::string name{};
    int roll{};
    float total_marks{};

    void setdata(std::string nam, int rol, float toMarks)
    {
        name = nam;
        roll = rol;
        total_marks = toMarks;
    }

    void getdata()
    {
        std::cout << "Name :: " << name << '\n';
        std::cout << "Roll no. :: " << roll << '\n';
        std::cout << "Total marks :: " << total_marks << '\n';
    }

    float percentage(float fullMarks)
    {
        return total_marks / fullMarks * 100; //calculating percentage.
    }
};
int main()
{
    std::cout << "Enter your name :: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Roll no. :: ";
    int roll{};
    std::cin >> roll;

    std::cout << "Total Marks obtained :: ";
    float total_marks{};
    std::cin >> total_marks;

    std::cout << "Enter Full marks :: ";
    float fullMarks{};
    std::cin >> fullMarks;

    std::cout << "Your information :: \n";

    STUDENT stdu{};

    stdu.setdata(name, roll, total_marks);
    stdu.getdata();
    std::cout << "Percentage obtained :: " << stdu.percentage(fullMarks);

    return 0;
}
