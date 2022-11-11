// Author :     Samir Ali
// Module :     Programming in C
// Program  :   Report Card Generator

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char Name[10], Class[3], Message[50], Section, Grade;
    int Roll_No, English, Hindi, Maths, Science, Social_Science, Computers, Total_Marks;
    float Percentage;

    puts("---------------------------------------------------------------");
    puts("************ Welcome to Jawahar Navodaya Vidyalaya ************");
    puts("           Please Generate Student Annual report Here          ");
    puts("---------------------------------------------------------------");

    printf("\nEnter the Student Name : ");
    scanf("%[^\n]%*c", Name);
    printf("\nEnter Student Class(in Roman): ");
    scanf("%[^\n]%*c", Class);
    printf("\nEnter Student Roll No.: ");
    scanf("%d", &Roll_No);
    printf("\nEnter Student Section : ");
    scanf("%s", &Section);
    printf("\nNow put the subjects marks out of 100\n");
    printf("\nMarks out of 100 in English : ");
    scanf("%d", &English);
    printf("\nMarks out of 100 in Hindi : ");
    scanf("%d", &Hindi);
    printf("\nMarks out of 100 in Maths : ");
    scanf("%d", &Maths);
    printf("\nMarks out of 100 in Science : ");
    scanf("%d", &Science);
    printf("\nMarks out of 100 in Social Science : ");
    scanf("%d", &Social_Science);
    printf("\nMarks out of 100 in Computers : ");
    scanf("%d", &Computers);

    Total_Marks = Hindi + English + Maths + Science + Social_Science + Computers;
    Percentage = Total_Marks / 6;
    if (Total_Marks > 500 && Total_Marks <= 0)
    {
        printf("\nYour calculation is Invalid, So program is terminated . ");
        exit(0);
    }
    else if (Total_Marks >= 450 && Total_Marks <= 500)
    {
        Grade = 'A';
    }
    else if (Total_Marks >= 400 && Total_Marks < 450)
    {
        Grade = 'B';
    }
    else if (Total_Marks >= 350 && Total_Marks < 400)
    {
        Grade = 'C';
    }
    else if (Total_Marks >= 300 && Total_Marks < 350)
    {
        Grade = 'D';
    }
    else if (Total_Marks >= 250 && Total_Marks < 300)
    {
        Grade = 'E';
    }
    else if (Total_Marks >= 200 && Total_Marks < 250)
    {
        Grade = 'F';
    }

    puts("---------------------------------------------------------------------------------");
    puts("******************* Welcome to Jawahar Navodaya Vidyalaya ***********************");
    puts("-----------------------------Annual Report Card----------------------------------");
    puts("*********************************************************************************");
    printf("Name : %s | Class : %s | Roll No.: %d | Section : %s\n", Name, Class, Roll_No, Section);
    puts("=================================================================================");
    puts("Subject : Hindi || English || Maths || Science || Social Science || Computers  ||");
    puts("=================================================================================");
    printf("Marks   :  %d\t     %d\t       %d\t  %d\t       %d\t       %d\t\n", Hindi, English, Maths, Science, Social_Science, Computers);
    puts("=================================================================================");
    printf("Total Marks Secured : %d\t     || Percentage : %.1f\t     || Grade : %c\t  ||\n", Total_Marks, Percentage, Grade);
    puts("=================================================================================");
}