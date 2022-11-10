// Author :     Samir Ali
// Module :     Programming in C
// Topic  :     Assignment

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char Name[10], Class[3], Section;
    int Roll_No, English, Hindi, Maths, Science, Social_Science, Computers, Total_Marks;
    float Percentage;

    puts("---------------------------------------------------------------");
    puts("************ Welcome to Jawahar Navodaya Vidyalaya ************");
    puts("          Please Generate Student Annual report Here           ");
    puts("---------------------Annual Report Card------------------------");

    printf("Enter the Student Name : ");
    scanf("%[^\n]%*c", Name);
    printf("Enter Student Class(in Roman): ");
    scanf("%[^\n]%*c", Class);
    printf("Enter Student Roll No.: ");
    scanf("%d", &Roll_No);
    printf("Enter Student Section : ");
    scanf("%s", &Section);

    puts("---------------------------------------------------------------");

    printf("\nNow put the subjects marks out of 100\n");
    printf("English : ");
    scanf("%d", &English);
    printf("Hindi : ");
    scanf("%d", &Hindi);
    printf("Maths : ");
    scanf("%d", &Maths);
    printf("Science : ");
    scanf("%d", &Science);
    printf("Social Science : ");
    scanf("%d", &Social_Science);
    printf("Computers : ");
    scanf("%d", &Computers);

    Total_Marks = Hindi + English + Maths + Science + Social_Science + Computers;
    Percentage = Total_Marks / 6;
    if (Total_Marks > 500 && Total_Marks <= 0)
    {
        exit(0);
    }

    printf("Total Marks secured : %d/n", Total_Marks);
    printf("Percentage() %f\n", Percentage);

    if (Total_Marks >= 450 && Total_Marks <= 500)
    {
        puts("Grade : 'A'");
        puts("Excellent!! Keep it up.");
    }
    else if (Total_Marks >= 400 && Total_Marks < 450)
    {
        puts("Grade : 'B'");
        puts("Very Good !! Kepp it up.");
    }
    else if (Total_Marks >= 350 && Total_Marks < 400)
    {
        puts("Grade : 'C'");
        puts("Good ! Try imporving in the next exam.");
    }
    else if (Total_Marks >= 300 && Total_Marks < 350)
    {
        puts("Grade : 'D'");
        puts("Average ! Need to work hard.");
    }
    else if (Total_Marks >= 250 && Total_Marks < 300)
    {
        puts("Grade : 'E'");
        puts("Poor ! Need alot of hard work.");
    }
    else if (Total_Marks >= 200 && Total_Marks < 250)
    {
        puts("Grade : 'F'");
        puts("Failed ! You need to take special classes after school.");
    }
}