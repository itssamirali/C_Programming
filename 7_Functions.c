#include<stdio.h>

void Hello();
void Namaste_Duniya(); //Function declaration/prototype

int main(){

    //function call
    Hello();
    Namaste_Duniya();
    return 0;
}

void Hello(){

printf("Hello_World! :)\n");
}

void Namaste_Duniya() {

    printf("Namaste Duniya ! :)");
}