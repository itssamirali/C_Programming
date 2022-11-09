#include <stdio.h>

int main()
{

    // Arithmetic Operaor : + , - , *, /, %
    int a, b;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("The Addition of a and b is %d\n", sum);
    printf("The Subtraction of a and b is %d\n", sub);
    printf("The Multiplication of a and b is %d\n", mul);
    printf("The Division of a and b is %d\n", div);
    printf("The Modulas of a and b is %d\n", mod);
}