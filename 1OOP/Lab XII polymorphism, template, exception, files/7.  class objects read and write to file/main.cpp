#include <iostream>
#include <string>
#include <fstream>
/*
WAP to write and read an object of student class to and from a file new.txt.
Class student having name, roll, and two functions for input and display.
*/
class Student
{
public:
    std::string name;
    int roll;

    void inputData()
    {
        std::cout << "Enter Name : ";
        std::getline(std::cin, name);
        std::cout << "Enter roll number : ";
        std::cin >> roll;
        std::cin.ignore();
    }

    void displayData() const
    {
        std::cout << "Name : " << name << '\n';
        std::cout << "Roll number : " << roll << '\n';
    }
};

int main()
{
    Student student1;
    student1.inputData();
    //student1.displayData();

    std::ofstream write_file{"new.dat", std::ios::binary};
    //write objects in a binary file with std::ios::binary
    write_file.write((char*)&student1, sizeof(student1));
    //syntax

    write_file.close();

    //lets read the file now
    std::ifstream read_file{"new.dat", std::ios::binary};

    Student student2;
    //read file and save data in student2 object now
    read_file.read((char*) &student2, sizeof(student2));
    student2.displayData();

    return 0;
}
