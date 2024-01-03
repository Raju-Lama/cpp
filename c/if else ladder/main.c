#include <stdio.h>
#include <stdlib.h>
//program to find out if the entered number is a positive or negative odd or even number.
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if(num % 2 == 0 && num > 0)
    {
        printf("\n%d is a positive even number.",num);
    }
    else if(num % 2 == 0 && num < 0)
    {
        printf("\n%d is a negative even number.",num);
    }
    else if(num % 2 != 0 && num > 0)
    {
        printf("\n%d is a positive odd number.",num);
    }
    else
    {
        printf("\n%d is a negative odd number.\n",num);
    }
    return 0;
}
