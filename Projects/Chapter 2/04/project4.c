#include <stdio.h>

int main(void)
{
    float amount;

    printf("Tax calc\n");
    printf("Enter an amount: ");
    scanf("%f", &amount);

    float amountWithTax = amount * 1.05f;

    printf("With tax added: $%.2f\n", amountWithTax);
    return 0;
}
