// Write a C program to find the sum of first 10 natural numbers...

#include <stdio.h>

int main()
{

    int sum = 0, n = 10;

    printf("The sum of first 10 natural numbers are : ");

    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }
    printf("= %d", sum);
}