#include <stdio.h>

int main()
{

    int num[10], i = 0, largest = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the number of an array %d : ", i);
        scanf("%d", &num[i]);
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    printf("Input element of array is : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nThe largest number present in this array is : %d", largest);
}
