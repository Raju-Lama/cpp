//static
#include <iostream>

class Company {
    public:
        // declare a static variable
        static std::string m_name;

        // create a static function
        static void print_name()
        {
            std::cout << m_name;
        }
};

// define the static variable
std::string Company::m_name;

int main() {

    // get user input for static variable name
    getline(std::cin, Company::m_name);

    // call the static function
    Company::print_name();

    return 0;
}
