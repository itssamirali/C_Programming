// Write a program in C to display n terms of natural number and their sum...

#include <stdio.h>

int main()
{

    int num, sum = 0;
    puts("Enter a number : ");
    scanf("%d", &num);
    printf("The nth term of natural numbers are : ");
    int i = 1;
    while (i <= num)
    {
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    printf("\nThe sum of nth natural mnumbers are : %d", sum);
}