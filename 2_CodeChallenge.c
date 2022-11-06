/*
    Author: "Samir Ali"
    Course: "C Programming"
    Topic:  "Tokens"
*/
#include <stdio.h>
int main() {
    
    char country[10] = "India's";
    char dollarSign = '$';
    float dollarPrice = 2.2;
    int year =2015;
    
    printf("As economic reforms picked up the pace, %s GDP grew five-fold to reach US %c%.1f trillion in %d as per IMF estimates.", country,dollarSign,dollarPrice,year);

    return 0;
}