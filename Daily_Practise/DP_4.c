// Write a C program to check whether a given number is odd or even..
#include <stdio.h>

int main()
{

    int num1;

    printf("Enter a number : ");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
    {

        puts("it is Even Number");
    }
    else
    {

        puts("It is Odd Number");
    }
}