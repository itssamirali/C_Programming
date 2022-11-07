#include <stdio.h>

int main()
{

    char name[15] = "Farmhouse"; // TODO get name as user input
    char size;
    int personItserves;
    float retailPrice;

    printf("Enter the size of a Pizza either S , M , L :");
    scanf("%c", &size);
    printf("Enter the person it serves :");
    scanf("%d", &personItserves);
    printf("Enter the Price of Pizza :");
    scanf("%f", &retailPrice);

    printf("Generating Message...\n\n");

    printf("\n\nyay! You ordered a %s Pizza of size %c for %d persons\n", name, size, personItserves);
    printf("in the amount of %.1f Thak you!!!\n", retailPrice);

    printf("\n\nSMS sending...\n\n");

    printf("\nSMS sent\n");
}