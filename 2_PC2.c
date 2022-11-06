/*
    Author: "Samir Ali"
    Course: "C Programming"
    Topic:  "Tokens"
*/
#include <stdio.h>

int main() {

    char name[15] = "Farm House";
    char size = 'M';
    int personServes = 5;
    float retailPrice = 365.7;

    printf("Yay! You have ordered a %s Pizza of size %c for %d person.\n",name, size,   personServes);
    printf("Please pay the amount of Rs %.1f",retailPrice);

    return 0;
}