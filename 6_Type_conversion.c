#include<stdio.h>
int main() {

    //explicit conversion
    int a = 5;
    float b = (int) 2.5;
    int sum = a + b;
    printf("%d\n", sum);

    //implicit conversion

    int x = 98;
    char y = x;
    printf("%c",y);

}