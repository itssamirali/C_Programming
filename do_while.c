#include <stdio.h>

int main()
{

    int num, reversenumber = 0, remainder;

    printf("Enter a number : ");
    scanf("%d", &num);

    int originalnum = num;

    do
    {
        remainder = num % 10;
        reversenumber = (reversenumber * 10) + remainder;
        num = num / 10;
    } while (num > 0);

    if (originalnum == reversenumber)
    {
        printf("it is Palindrome");
    }
    else
    {
        printf("It is not a Palindrome");
    }
    return 0;
}