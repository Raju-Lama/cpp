#include <iostream>

//directly cout to the file

#include <fstream>
int main()
{
    std::fstream  myfile{};

    myfile.open("writeMe.txt", std::ios::out);
    //always use double quote

    if (myfile.fail())
    {
        std::cout << "File not opened properly!";
        exit(0);
    }

    myfile << "words written to the file!" << '\n';
    //like std::cout;

    myfile.close();
    return 0;
}
