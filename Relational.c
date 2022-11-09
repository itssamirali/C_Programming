#include <stdio.h>

int main()
{

    /* Relational Operators
       - A condition in C returns either 0 or 1
           - 0 represents a False condition
           - 1 represents a True condition  */

    int a = 2;
    int b = 3;
    int c = 3;

    int r1 = a > b;  // False: 	r1 = 0
    int r2 = b >= a; // True: 	r2 = 1

    int r3 = a < b;  // True:	r3 = 1
    int r4 = b <= a; // False:	r4 = 0

    int r5 = b == c; // True:	r5 = 1
    int r6 = c != a; // True:	r6 = 1

    printf("The value of r1: %d\n", r1);
    printf("The value of r2: %d\n", r2);
    printf("The value of r3: %d\n", r3);
    printf("The value of r4: %d\n", r4);
    printf("The value of r5: %d\n", r5);
    printf("The value of r6: %d\n", r6);

    return 0;
}