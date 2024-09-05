// Replace ___ with your code

#include<iostream>
using namespace std;

int main() {

    // get integer inputs
    int num1, num2;
    cin >> num1 >> num2;

    // get character input
    char op;
    cin >> op;

    // lambda function with explicit return type 'double'
    // capture all values with implicit capture by value
    auto calculate = [=] ()-> double {

        // use switch...case to check op
        switch (op) {

            // return sum if op is '+'
            case '+':
                return num1 + num2;
                break;

            // return difference if op is '-'
            case '-':
                return num1 - num2;
                break;

            // return product if op is '*'
            case '*':
                return num1 * num2;
                break;

            // return result of division if op is '/'
            // use static_cast to get a double value
            case '/':

                // return -1 if num2 is 0
                if (num2 == 0) {
                    return -1;
                }

                // else, return division of num1 and num2
                // also use static_cast to convert num1 to double
                else {
                    return static_cast<double>(num1) / num2;
                }

                break;

            // return -1 if operator is invalid
            default:
                return -1;
        }
    };

    // call the calculate() lambda
    double result = calculate();

    // print the result
    cout << result;

    return 0;
}
