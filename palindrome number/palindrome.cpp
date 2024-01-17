//int input();
int palindrome(int x)//x takes the real value while it is being called everytime,
{
    int num{x};//initialized to calculate;
    int rev{0};//initializing with 0
    int rem{};
    //int real{num};
    while(num != 0)//ever digits of the number is divided by 10 to reduce it until it becomes zero
    {
        rem = num % 10;//the last digit of the number
        rev = rev * 10 + rem;//the last digit is now the first digit, the 2nd last digit becomes the 2nd digit and so on.
        num /= 10;//remainder is already taken, thus, we have to remove the last digit of the number.
    }
    return rev;
}
