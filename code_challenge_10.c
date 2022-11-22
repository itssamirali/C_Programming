#include <stdio.h>
#include <string.h>

struct book
{
    char title[10];
    char Author[10];
    float price;
};

int main()
{

    struct book b1;

    strcpy(b1.title, "Book C++");
    strcpy(b1.Author, "Samir");
    b1.price = 855.00;

    printf("Book Details : \nThe Title of the book is %s Author is %s and the price is %.2f\n", b1.title, b1.Author, b1.price);
}