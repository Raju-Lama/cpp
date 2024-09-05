// Replace ___ with your code

#include <iostream>
#include <exception>
using namespace std;

int main() {

    // get user input for double variables
    double numerator, denominator;

    // create try block
    try {

        cin >> numerator >> denominator;

        // throw an exception if denominator is 0.0
        if(denominator == 0.0)
        {
            throw exception();
        }

        // divide numerator by denominator
        double result = numerator / denominator;

        // print the result
        cout << result;
    }

    // create catch block with exception object as parameter
    catch(exception obj) {

        // print custom error message
        cout << "Error! Denominator cannot be 0." << endl;

        // print the error message using what()
        cout << obj.what();
    }

    return 0;
}
