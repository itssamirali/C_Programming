#include <stdio.h>

int main()
{

    int numbers[10];

    for (int i = 0; i < 10; i++)
    {

        printf("Enter the element %d : ", i);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The elements of array is : %d\n", numbers[i]);
    }
}
