#include <stdio.h>

int main()
{

    const float PI = 3.14;
    float radius;

    printf("Enter the radius of circle :");
    scanf("%f", &radius);
    float area = 2 * PI * radius;
    printf("The Area of a Circle is : %.1f", area);
}