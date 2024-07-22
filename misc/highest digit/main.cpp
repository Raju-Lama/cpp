#include <iostream>
//find the highest digit in a number
int findMaxDigit(int num) {
    int intArr[10]{};
    int rem{};
    int n{num};
    //int count{0};
    for(int i = 0; n != 0; i++)
    {
        if(n / 10 == 0)
        {
            intArr[i] = n;
            break;}

        intArr[i] = n % 10;
        n /= 10;
        //count++;
    }

    int highest{intArr[0]};

    for(int i = 0; intArr[i] < 10 ; i++)
    {
        if (highest < intArr[i])
            highest = intArr[i];
    }
    return highest;
}

int main()
{
    std::cout << findMaxDigit(12345987) << std::endl;
    return 0;
}
