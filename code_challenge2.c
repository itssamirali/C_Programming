#include <stdio.h>

int main()
{

    int marks;

    printf("please Enter the marks : ");
    scanf("%d", &marks);

    if (marks >= 450 && marks <= 500)
    {
        printf("You got 'A' Grade");
    }
    else if (marks >= 400 && marks < 450)
    {
        printf("You got 'B' Grade ");
    }
    else if (marks >= 350 && marks < 400)
    {
        printf("You got 'C' Grade");
    }
    else if (marks >= 250 && marks < 350)
    {
        printf("You got 'D' Grade");
    }
    else if (marks >= 150 && marks < 250)
    {
        printf("You got 'E' Grade");
    }
    else if (marks < 150)
    {
        printf("You got 'F' Grade !!! Sorry You Fail !!!");
    }
    else
    {

        printf("You entered Invalid Number");
    }

    return 0;
}