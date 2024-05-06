#include <iostream>
#include <array>

enum Student
{
    Ram,//0
    Shyam,//1
    Mottu, //2
    Petu,//3

    max_size//4
};

int main()
{
    constexpr std::array <int, 4> marksObtained {40, 56, 50, 60};// this size must equal to max_sixe
    static_assert(std::size(marksObtained) == max_size);//to check if the size of array and size of enum are same

    std::cout << marksObtained[Student::Petu];

    return 0;
}
