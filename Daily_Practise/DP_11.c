// Write a program in C to display the multiplication table of a given integer..
#include <stdio.h>

int main()
{

    int num, mul;

    printf("Enter the number which Table that you want : ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {

        mul = num * i;
        printf("%d * %d  = %d\n", num, i, mul);
    }
}