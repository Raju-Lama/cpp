#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//6. WAP to enter a roll, name, and fee in an abc.txt and display them.
int main()
{
    std::ofstream write_file("abc.txt");
    write_file << "Roll : ";
    std::cout << "Enter roll number : ";
    int roll;
    std::cin >> roll;
    write_file << roll << '\n';

    write_file << "Name : ";

    std::cout << "Enter Name : ";
    std::string name;
    std::cin.ignore();//flush the buffer
    std::getline(std::cin, name);

    write_file << name << '\n';

    write_file << "Fee : ";
    std::cout << "Enter fee : ";
    float fee;
    std::cin >> fee;

    write_file << fee << '\n';
    write_file.close();


//read file now to display
    std::cout << std::setw(20) << "-------- ---------" << "\n\n";

    std::ifstream read_file("abc.txt");
    std::string temp;
    while(!read_file.eof())
    {
        //read_file >> temp;
        //only reads one word at a time, so lets read a line at a time
        std::getline(read_file, temp);
        //newline default delimiter/delim
        std::cout << temp << '\n';
    }

    std::cout << "\n\n" << std::setw(20) << "-------- ---------" << "\n\n";
    read_file.close();

    return 0;
}
