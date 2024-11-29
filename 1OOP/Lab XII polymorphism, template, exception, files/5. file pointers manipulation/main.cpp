#include <iostream>
#include <fstream>

// 5. WAP that show the use of tellg(), tellp(), seekg(), seekp(),
// and directions ios::beg, ios::end, ios::cur.
/*
1. seekg(n): Moves get pointer(input) to a specified location from the start.
    a. fileObject.seekg(0): Goes to the start of the file for reading.
    b. fileObject.seekg(n): Goes to nth byte from beginning for reading.
2. seekp(n): Moves put pointer(output) to a specified location from the start.
    a. fileObject.seekp(0): Goes to the start of the file for writing.
    b. fileObject.seekp(n): Goes to nth byte from beginning for writing.
3. tellg(): Gives the current position of the get pointer.
    It returns an integer value that specifies the current location of the get pointer.
    a. int p = fileObject.tellg();
    //returned value is assigned to p.
4. tellp(): Gives the current position of the put pointer.
    It also returns an integer value that specifies the current location of put pointer.
    a. int p = fileObject.tellp();
    //returned value is assigned to p.
*/
    //ofstream to write a file
    //ifstream to read from a file

int main()
{
    //create a file first and read the file later on
    std::ofstream file{"newfile.txt"};
    file << "Hello World!";
    //for writing use insertion operator
    //output to the filestream/ writing a file
    file << "Bye Bye!";

    int current_position = file.tellp();
    std::cout << "Current write position : " << current_position << '\n';

    file.seekp(0, std::ios::end);
    file << "Oh! Wait!";
    //put something in the first location with seekp(0)
    file.seekp(20, std::ios::beg);
    file << "Hakuna Matata!";

    file.close();

    std::ifstream read_file{"newfile.txt"};
    while(read_file.eof())
    {
        std::cout << "Read position : " << read_file.tellg() << '\n';
    }

    read_file.seekg(5, std::ios::cur);
    //current position

    int current_read_position = read_file.tellg();
    std::cout << "Current read position : " << current_read_position << '\n';
    read_file.close();

    return 0;
}
