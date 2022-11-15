// Write a C program to accept two integersand  check whether they are equal or not...
#include <stdio.h>

int main()
{

    int num1, num2;

    puts("Enter first number : ");
    scanf("%d", &num1);
    puts("Enter second number : ");
    scanf("%d", &num2);

    if (num1 == num2) // Compare
    {

        puts("Both numbers are equal");
    }
    else
    {

        puts("Both numbers are not equal");
    }
    return 0;
}