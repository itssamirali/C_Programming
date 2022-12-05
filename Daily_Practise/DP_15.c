#include <stdio.h>
int b = 5, c = 7; // Global Variable
int main()

{

    int a = 5;        // local variable
    static int x = 5; // static variable
    auto int m;
    int n;
    const a = 5; // constant variable
    printf("The value of a is : %d\n", a);
    printf("The sum of a and b is : %d\n", a + b);
    printf("The value of c is : %d\n", c);
    printf("The value of x is : %d\n", x);
    x = a + x;
    printf("The sum of a and x is : %d\n", a + x);
    printf("%d\n", m);
    printf("%d\n", n);
    a++;
    printf("%d", a);
}