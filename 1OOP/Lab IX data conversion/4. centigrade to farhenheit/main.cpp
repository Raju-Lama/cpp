#include <iostream>
//4. WAP to convert Centigrade into Fahrenheit temperature. ( F= 9*C/5 + 32)
int centigradeToFarenheit(float centigrade)
//convert into integer type implicit
//we can do is explicit by typename(variabletoconvert)
{
    return (9*centigrade/5) + 32;
}

int main()
{
    float centigrade;
    //take float type
    std::cout << "Enter Centigrade :: ";
    std::cin >> centigrade;

    std::cout << centigrade << " == " << centigradeToFarenheit(centigrade) << " Farenheit";
    return 0;
}
