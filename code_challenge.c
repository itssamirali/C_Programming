#include <stdio.h>

int main()
{
    int a = 11111;
    long b = 25858565;
    float c = 2.5558;
    double d = 25.2555556;
    printf("value of integer %d\n", a);
    printf("value of long int %ld\n", b);
    printf("value of float %f\n", c);
    printf("value of double %lf\n", d);
    printf("%d\n", sizeof(int));
    printf("%c\n", sizeof(char));
    printf("%f\n", sizeof(float));
    printf("%lf\n", sizeof(double));
    printf("%ld\n", sizeof(long));

    return 0;
}