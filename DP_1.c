#include <stdio.h>

int main()
{

    int a, b, sum, mul;

    printf("Enter the value of a and b : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    if (a == b)
    {
        mul = sum * 3;
        printf("a and b is same so the solution is : %d", mul);
    }
    else
    {
        printf("The sum of a and b is : %d", sum);
    }
}