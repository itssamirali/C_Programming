#include <stdio.h>

int main()
{

    char Grade;

    puts("Enter the Student Grade : ");
    scanf("%c", &Grade);

    switch (Grade)
    {
    case 'A':
        puts("Excellent!! Keep it up.");
        break;
    case 'B':
        puts("Very Good !! Kepp it up.");
        break;
    case 'C':
        puts("Good ! Try imporving in the next exam.");
        break;
    case 'D':
        puts("Average ! Need to work hard.");
    case 'E':
        puts("Poor ! Need alot of hard work.");
    case 'F':
        puts("Failed ! You need to take special classes after school");
        break;
    default:
        puts("You entered wrong Grade");
        break;
    }
}