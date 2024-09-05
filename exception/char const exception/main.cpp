// Replace ___ with your code

#include <iostream>
using namespace std;

int main() {

    // initialize array
    int numbers[] = {10, 20, 30};

    // get array length by dividing
    // the size of the whole array
    // by the size of the first array element
    int array_length = sizeof(numbers) / sizeof(numbers[0]);

    // create index variable
    int index;

    // try block
    try {

        // get input for index
        cin >> index;

        // throw an exception if index is
        // less than 0 or if index is
        // greater than or equal to array length
        if (index < 0 || index >= array_length)

            // throw the string "Array is out of bounds!"
            throw "Array is out of bounds!";

        // print the array element at index
        cout << numbers[index];
    }

    // catch block with char const* parameter
    catch (char const* msg) {

        // print the catch parameter
        cout << msg;
    }

    return 0;
}
