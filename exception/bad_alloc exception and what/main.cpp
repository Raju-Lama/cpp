// Replace ___ with your code

#include <iostream>
using namespace std;

// import the exception file
#include <exception>

int main() {

    // create a try block
    try {

        // allocate excessive memory to dynamically created array
        int* ptr = new int[1000000000000000];

        // print the first array element
        cout << ptr[0];

        // deallocate the memory
        delete[] ptr;
    }

    // catch exception if excessive memory is allocated
    // use object of bad_alloc class as catch argument
    catch (bad_alloc e)
    //or use exception type, to return std::exception
    {

        // print default error message using what()
        cout << e.what();
    }

    return 0;
}
