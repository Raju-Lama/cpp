#include <iostream>
/*
2. WAP to store GPA of n number of students and display it where n is
the number of students entered by user. (new, and delete operator)
*/
int main()
{
    std::cout << "Enter the number of students :: ";
    int n{};
    std::cin >> n;

    float* gpa { new float{n} };//dynamic memory allocation for gpa

    std::cout << "Enter GPA :: \n";

    for(int i = 0; i < n; ++i)
    {
        std::cout << "For student " << i + 1 << " :: ";
        std::cin >> gpa[i];
    }

    std::cout << "Displaying information :: \n";

    for(int i = 0; i < n; ++i)
    {
        std::cout << "For student " << i + 1 << " :: " << gpa[i] << '\n';
    }

    delete[] gpa;
    gpa = nullptr;
    return 0;
}
