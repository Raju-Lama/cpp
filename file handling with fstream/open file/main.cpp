#include <iostream>
#include <fstream> //is a class, create objects of the class to work on files

int main()
{
    //open a file
    std::fstream obj;
    obj.open("fileName.txt");
    //if no files doesn't open

    if (!obj)
        std::cout << "File not opened! fail() status -> " << obj.fail() << '\n';
        std::exit(0);

    std::string copyFromFile{};

    while(obj.eof()) //eof method
    {
        std::getline(obj, copyFromFile);

        std::cout << copyFromFile << '\n';
    }

    obj.close(); //close the file
    return 0;
}
