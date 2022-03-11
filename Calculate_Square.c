#include<stdio.h>

int Calc_Square(int n);

int main(){

    int n;
    printf("Enter the number that you want to :\n");
    scanf("%d",&n);
    printf("The sqaure is : %d",Calc_Square(n));
}

int Calc_Square(int n){
    return n * n ;
}