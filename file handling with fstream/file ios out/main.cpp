#include <iostream>
//fstream std::ios::out

//file opening modes,
/*

std::ios::in --> to input //ie that is to read from the file,

std::ios::out --> to output // ie, that is to write to the file, overwrite

std::ios::app --> to append // ie, to append to the file

*/
#include <fstream>

int main()
{
    std::fstream myFile{"fileOut2.txt", std::ios::in}; // to read from the file ios::in
    //directly initializing

    // std::fstream myfile;
    //myfile.open('filename', std::ios::modes)

    if (myFile.fail())
    {
        std::cout << "File not opened!";
        exit(0);
    }

    while(!myFile.eof()) //not the end of file
    {
        std::string leaf{};
        std::getline(myFile, leaf);
        std::cout << leaf << '\n';
    }


    myFile.close();
    return 0;
}
