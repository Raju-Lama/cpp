#include <iostream>
#include <string_view>
/*
8. Write a function Emp_Record () to display name, age, and address
of an employee. The function takes three arguments;
two string arguments for name & address, and one int
argument for age and displays the data.
Use a default value "KATHMANDU" for address,
to make the function to display when this argument is omitted.
Write a main that gets the values from the user to test
 the function. (Default Arguments)
*/
void Emp_Record(std::string_view name, int& age, std::string_view address="KATHMANDU")
{
    std::cout << "Name :: " << name;
    std::cout << "\nAge :: " << age;
    std::cout << "\nAddress :: " << address;
}

int main()
{
    std::cout << "Enter your name :: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Enter your age :: ";
    int age{};
    std::cin >> age;

    std::cin.ignore();//this is use to ignore the \n new line after above input

    std::cout << "Enter your address :: ";
    std::string address{};
    std::getline(std::cin, address);

    std::cout << "Your details :: \n";
    Emp_Record(name, age, address);
    return 0;
}
