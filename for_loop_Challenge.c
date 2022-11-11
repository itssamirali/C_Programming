#include <stdio.h>

int main()
{

    int n;
    long sum = 0;

    printf("Enter the value o f 'n' :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("Sum : %ld", sum);
}
