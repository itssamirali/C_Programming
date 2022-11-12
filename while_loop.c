#include <stdio.h>

int main()
{

    long n;
    printf("Enter the number : ");
    scanf("%ld", &n);

    int i = 0;
    while (n > 0)
    {
        i++;
        n = n / 10;
    }
    printf("Total number of digit is %d", i);
}