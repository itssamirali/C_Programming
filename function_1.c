#include <stdio.h>

int area(float, float);

int main()
{

    float length, breadth, perimeter;

    puts("Enter the length of the rectangle : ");
    scanf("%f", &length);
    puts("Enter the breadth of the rectangle : ");
    scanf("%f", &breadth);
    perimeter = area(length, breadth);
    printf("The perimeter of the rectangle is : %.1f", perimeter);
}

int area(float a, float b)
{
    return 2 * (a + b);
}