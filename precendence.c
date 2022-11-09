#include <stdio.h>

int main()
{

    int a = 10, b = 10, c = 15;

    int result = a > b && c >= a || b;

    printf("The Result of : %d", result);
}