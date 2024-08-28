#include <iostream>
#include <fstream>

//ifstream to read from input stream



int main()
{
    std::ifstream file{"readMe.txt"};//std::ios::in optionnal
    //ifstream reads file
    //file.open(readMe.txt, std::ios::in); is alternative

    if(file.fail())
    {
        std::cout << "File open error!";
        exit(0);
    }

    while(!file.eof())
    {
        std::string str{};
        getline(file, str);
        std::cout << str;
    }

    file.close();
    return 0;
}
