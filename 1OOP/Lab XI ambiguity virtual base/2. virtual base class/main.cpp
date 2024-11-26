#include <iostream>
/*
Create a class called student that stores the roll, and one function for
 getting roll and other to display the roll. Similarly, create another class
 test derived from student having marks for first and second term.
Make two functions one for getting the marks and another to display them.
Create class sports derived from student having score as its data member and
getting score and displaying function which displays roll, marks, score
and total. (virtual base class)
*/
//heirarchical inheritance
//but how virtual class?

class Student
{
public:
    int roll;

    void set_roll()
    {
        std::cout << "Enter roll number : ";
        std::cin >> roll;
    }

    void display()
    {
        std::cout << "Roll number : " << roll << '\n';
    }
};

class Test : public Student
{
public:
    float first_term_marks, second_term_marks;

    void set_marks()
    {
        std::cout << "Enter first term marks : ";
        std::cin >> first_term_marks;
        std::cout << "Enter Second term marks : ";
        std::cin >> second_term_marks;
    }

    void get_marks()
    {
        std::cout << "First term marks : " << first_term_marks << '\n';
        std::cout << "Second term marks : " << second_term_marks << '\n';
    }
};

class Sports : public Student
{
public:
    int score;

    void set_score()
    {
        std::cout << "Enter Score : ";
        std::cin >> score;
    }

    void get_score()
    {
        std::cout << "Scores : " << score << '\n';
    }
};

int main()
{
    Test marks;
    marks.set_roll();
    marks.set_marks();

    Sports score;
    score.set_score();

    marks.display();
    marks.get_marks();

    score.get_score();
    return 0;
}
