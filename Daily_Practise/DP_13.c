// Write a C program to convert specified days into years, weeks and days. Go to the editor
// Note: Ignore leap year...

#include <stdio.h>

int main()
{

    int day, years, weeks, days;

    printf("Enter the Days : ");
    scanf("%d", &day);
    years = day / 365;
    weeks = (day % 365) / 7;
    days = day - ((years * 365) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
}