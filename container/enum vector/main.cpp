#include <iostream>
#include <vector>
// to make the array indices more meaningful , a scoped enum can be used,
//like array[10] what does this refer to? its the 9th element, but, whats its purpose, when we don't know about array[10]

namespace Student
{
    enum Name
    {
        Ram,
        Petu,
        Mottu,
        Geeta,

        Max_size
    };
}
int main()
{
    std::vector<int> scores(Student::Max_size);

    scores[Student::Ram] = 50;

    std::cout << scores[0];//50
    std::cout << scores[Student::Ram];//50

    return 0;
}
