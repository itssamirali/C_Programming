#include <stdio.h>

void codd(int[], int);

int main()

{
    int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
    codd(numbers, 10);

    return 0;
}

void codd(int num[], int size)
{

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (num[i] % 2 != 0)
            count++;
    }
    printf("%d\n", count);
}