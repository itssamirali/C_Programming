#include <stdio.h>

int main()
{

    int bill, payable_amount;

    printf("Enter the Bill amount : ");
    scanf("%d", &bill);
    payable_amount = bill + (bill * 5 / 100);

    if (payable_amount >= 1000)
    {
        payable_amount = bill * 0.9;
        printf("Wow ! you got 10%% Discount your Net Bill is %d", payable_amount);
    }
    else
    {
        printf("Your payable_amount is %d", payable_amount);
    }

    return 0;
}