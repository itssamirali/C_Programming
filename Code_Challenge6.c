#include <stdio.h>

int findfibonacci(int);

int main()
{

    int n, result;

    puts("Enter a number : ");
    scanf("%d", &n);

    result = findfibonacci(n);

    printf("The fibonnaci series are : %d", result);
}
int findfibonacci(int a)
{

    if (a == 0 || a == 1)
    {
        return a;
    }
    else
    {
        return (findfibonacci(a - 1) + findfibonacci(a - 2));
    }
}