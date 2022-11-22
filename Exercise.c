#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int *ptr;
    ptr = &n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        puts("Memory allocation failed.");
        exit(0);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
            printf("%d ", ptr[i]);
        }
    }
}