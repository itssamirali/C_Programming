#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float *)calloc(n, sizeof(float));

    if (p == NULL)
    {
        puts("Memory allocation failed");
        exit(0);
    }
    else
    {
        puts("Enter data: ");

        /* User input. */
        for (int i = 0; i < n; i++)
        {
            scanf("%f", p + i); // Elements are being stored at their address.
        }

        /* Find the sum. */
        for (int i = 0; i < n; i++)
        {
            sum = sum + p[i]; // Accessing elements stored in the memory block by using 'p[i]'.
        }

        printf("The sum is %.2f", sum);
    }

    int r, new_size;
    puts("\nEnter the number of more values you want to enter: ");
    scanf("%d", &r);

    new_size = r + n;

    /* Dynamically re-allocate memory using realloc(). */
    p = (float *)realloc(p, new_size * sizeof(float));

    for (int i = n; i < new_size; i++)
    {
        p[i] = i + 1;
    }

    printf("The final values stored in the allocated memory block: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}