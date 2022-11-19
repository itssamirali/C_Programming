/* Write a program to input two integers and find the sum of those two numbers by using pointers.

Define two integer variables and get user input.
Define two pointers for each integer variable.
Find the sum and print the result. */

#include <stdio.h>

int main()
{

    int a, b, sum;
    int *p, *q;
    p = &a, q = &b;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    sum = *p + *q;

    printf("The sum of a and b is %d\n", sum);
    printf("%ld\n", &a);
    printf("%ld\n", &b);
    printf("%ld", &p);
}