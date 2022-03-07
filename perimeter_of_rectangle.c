#include<stdio.h>
int main(){

    int length, breath;
    printf("Enter the length of a rectangle:\n");
    scanf("%d",&length);
    printf("Enter the breath of a rectangle:\n");
    scanf("%d",&breath);
    printf("The perimeter of a rectangle is: %d",2*length*breath);
}