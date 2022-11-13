#include <stdio.h>

int main()
{

    long scoresTwo[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for index %d:", i);
        scanf("%ld", &scoresTwo[i]);
    }

    puts("Printing elements of scoresTwo: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%ld\n", scoresTwo[i]);
    }
}