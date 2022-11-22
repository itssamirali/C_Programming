#include <stdio.h>
#include <string.h>

union Book
{
    char title[10];
    char Author[10];
    float price;
};

int main()
{

    union Book b1;

    strcpy(b1.title, "Book C++");
    printf("The title of the book is : %s\n", b1.title);

    strcpy(b1.Author, "Samir");
    printf("The Author of the book is : %s\n", b1.Author);

    b1.price = 855.00;
    printf("The price of the book is : %.1f\n", b1.price);
}