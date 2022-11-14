#include <stdio.h>
#include <string.h>

int main()
{

    char a[10];
    char b[10];

    printf("Enter first string : ");
    scanf("%s", a);
    printf("Enter second string : ");
    scanf("%s", b);

    strcat(a, " ");

    strcat(a, b);

    printf("The first string is : %s", a);
}