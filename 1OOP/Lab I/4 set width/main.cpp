/*
4. A cricket team has the following table of batting figures for a series of test matches:
Player’s Name   Runs    Innings
Sachin          12300   200
Saurav          10000   130
Rahul           8990    134
Write a program to read the figures set out in the above form using manipulator setw() and calculate the batting
averages (runs/innings), and print out the complete table including the averages.
*/
#include <iostream>
#include <iomanip>//for std::setw(int n)
#include <string>
class Game
{
public:
    std::string m_name{};
    int m_runs{};
    int m_inn{};

};

int main()
{
    Game Sachin {"Sachin", 12300, 200};
    Game Saurav {"Saurav", 10000, 130};
    Game Rahul {"Rahul", 8990, 134};

    int avgRuns{ (Sachin.m_runs + Saurav.m_runs + Rahul.m_runs) / 3 };
    int avgInns{ (Sachin.m_inn + Saurav.m_inn + Rahul.m_inn) / 3 };

    std::cout << std::setw(3) << "Player's Name Runs Innings\n";
    std::cout << std::setw(3) << Sachin.m_name << Sachin.m_runs << Sachin.m_inn << '\n';
    std::cout << std::setw(3) << Saurav.m_name << Saurav.m_runs << Saurav.m_inn << '\n';
    std::cout << std::setw(3) << Rahul.m_name << Rahul.m_runs << Rahul.m_inn << '\n';
    std::cout << std::setw(3) << "Averages " << avgRuns << avgInns << '\n';
    return 0;
}
