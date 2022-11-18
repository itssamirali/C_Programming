// Write a program in C to read 10 numbers from keyboard and find their sum and average

#include <stdio.h>

int main()
{

    int num, sum = 0, avg;
    for (int i = 1; i <= 10; i++)
    {

        printf("Enter number : %d : ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10;
    printf("The sum of 10 numbers are : %d\n", sum);
    printf("The average of 10 numbers are : %d", avg);
}