// Write a C program to check whether a given number is positive or negative...
#include <stdio.h>

int main()
{

    int num1;

    printf("Enter a number : ");
    scanf("%d", &num1);
    if (num1 > 0)
    {

        puts("It is positive number");
    }
    else
    {

        puts("It is negative number");
    }
}