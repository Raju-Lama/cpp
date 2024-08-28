#include <iostream>
#include <fstream>
//read buffer function can also be used
//read from a file and write to another file
//std::ios::in to read
//std::ios::out to write

int main()
{
    std::fstream read{"source.txt", std::ios::in};
    //read from the file and input into ios

    std::fstream write{"destination.txt", std::ios::out};
    //write to a file

    if(read.fail() || write.fail())
    {
        std::cout << "Failed to read from the file!";
        exit(0);
    }


    std::string str;

    while(!read.eof())
    {
        std::getline(read, str);
        write << str << std::endl;
    }
    //we can also use rdbuf() method to read
    //streambuf* str = file.rdbuf()

    //or simply
    //destination << source.rdbuf()

    read.close();
    write.close();
    return 0;
}
