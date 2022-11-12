#include <stdio.h>

int main()
{

    int n;
    long sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of %d natural number is : %ld", n, sum);
}
