/*
4. A cricket team has the following table of batting
figures for a series of test matches:
Player’s Name      Runs      Innings
  Sachin          12300       200
  Saurav          10000       130
  Rahul            8990       134
Write a program to read the figures set out in the above form using
manipulator setw() and calculate the batting averages (runs/innings), and
print out the complete table including the averages.
*/
#include <iostream>
#include <iomanip>//for std::setw(int n)

int main()
{
    std::cout << std::left;
    std::cout << std::setw(20) << "Player's Name";
    std::cout << std::setw(20) << "Runs";
    std::cout << std::setw(10) << "Innings" << std::endl;//total 50 width

    std::cout << std::right;

    std::cout << std::setw(8) << "Sachin";
    std::cout << std::setw(16) << "12300";
    std::cout << std::setw(20) << "200" << std::endl;

    std::cout << std::setw(8) << "Saurav";
    std::cout << std::setw(16) << "10000";
    std::cout << std::setw(20) << "130" << std::endl;

    std::cout << std::setw(7) << "Rahul";
    std::cout << std::setw(17) << "8990";
    std::cout << std::setw(20) << "134" << std::endl;


    return 0;
}
