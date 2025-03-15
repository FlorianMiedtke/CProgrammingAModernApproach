#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twentyDollarBills = amount / 20;
    amount = amount - twentyDollarBills * 20;

    int tenDollarBills = amount / 10;
    amount = amount - tenDollarBills * 10;

    int fiveDollarBills = amount / 5;
    amount = amount - fiveDollarBills * 5;

    int oneDollarBills = amount / 1;

    printf("$20 bills: %d\n", twentyDollarBills);
    printf("$10 bills: %d\n", tenDollarBills);
    printf("$5 bills: %d\n", fiveDollarBills);
    printf("$1 bills: %d\n", oneDollarBills);

    return 0;
}
