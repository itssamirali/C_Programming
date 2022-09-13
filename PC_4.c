#include <stdio.h>
#include <conio.h>
int main()
{

    int height;
    int wight;
    int area;
    int perimeter;
    int choose;

    printf("***** Enter the problem which you want to solve ***** \n");
    printf("Enter 1 for Area and Enter 2 for Perimeter\n");
    scanf("%d", &choose);

    if (choose == 1)
    {
        printf(" *** You are using Area Formula *** \n");
        printf("Enter the height of the rectangle\n");
        scanf("%d", &height);
        printf("Enter the wight of a rectangle\n");
        scanf("%d", &wight);
        area = height * wight;
        printf("The area of %d and %d is : %d  ", height, wight, area);
    }
    else if (choose == 2)
    {
        printf(" *** You are using Perimeter Formula *** \n");
        printf("Enter the height of the rectangle\n");
        scanf("%d", &height);
        printf("Enter the wight of a rectangle\n");
        scanf("%d", &wight);
        perimeter = 2 * (height + wight);
        printf("The perimeter of %d and %d is : %d\n", height, wight, perimeter);
    }
    else
    {

        printf("You are entered wrong Input");
    }
    getch();
}