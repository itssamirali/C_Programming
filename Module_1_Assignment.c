// Author :     Samir Ali
// Module :     Programming in C
// Program  :   Report Card Generator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare Variable
    char Name[15], Section, Grade;
    int Class, Roll_No, English, Hindi, Maths, Science, Social_Science, Computers, Total_Marks;
    float Percentage;

    puts("---------------------------------------------------------------");
    puts("************ Welcome to Jawahar Navodaya Vidyalaya ************");
    puts("           Please Generate Student Annual report Here          ");
    puts("---------------------------------------------------------------");

    printf("\nEnter the Student Name : ");
    scanf("%[^\n]%*c", Name);
    printf("\nEnter Student Class : ");
    scanf("%d", &Class);
    printf("\nEnter Student Roll No. : ");
    scanf("%d", &Roll_No);
    printf("\nEnter Student Section : ");
    scanf("%s", &Section);

    printf("\nNow put the subjects marks out of 100\n");
    printf("----------------------------------\n");
    printf("Marks out of 100 in English : ");
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

    // Claculation
    Total_Marks = Hindi + English + Maths + Science + Social_Science + Computers;
    Percentage = Total_Marks / 6;

    if (Total_Marks > 500 || Total_Marks <= 0)
    {
        printf("\nYour calculation is Invalid, So Your program is terminated . ");
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

    printf("\nCalculating Result .......................\n\n");

    puts("******************* Welcome to Jawahar Navodaya Vidyalaya ***********************");
    puts("-----------------------------Annual Report Card----------------------------------");
    puts("*********************************************************************************");
    printf("Name :  %s     |   Class :  %d      |   Roll No.:  %d      |  Section :  %c  \n", Name, Class, Roll_No, Section);
    puts("=================================================================================");
    puts("Subject : Hindi || English || Maths || Science || Social Science || Computers  ||");
    puts("=================================================================================");
    printf("Marks   :  %d\t     %d\t       %d\t  %d\t       %d\t       %d\t\n", Hindi, English, Maths, Science, Social_Science, Computers);
    puts("=================================================================================");
    printf("Total Marks Secured : %d\t||   Percentage : %.1f\t     ||   Grade : %c\t  \n", Total_Marks, Percentage, Grade);
    puts("=================================================================================");

    return 0;
}