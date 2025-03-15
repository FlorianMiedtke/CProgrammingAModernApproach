#include <stdio.h>

int main(void)
{
    float loan, interestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interes rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterestRatePercentage = interestRate / 100 / 12;

    float balanceFirstPayment = loan + loan * monthlyInterestRatePercentage - monthlyPayment;

    float balanceSecondPayment = balanceFirstPayment + balanceFirstPayment * monthlyInterestRatePercentage - monthlyPayment;

    float balanceThirdPayment = balanceSecondPayment + balanceSecondPayment * monthlyInterestRatePercentage - monthlyPayment;

    printf("Balance remaining after first payment: %.2f\n", balanceFirstPayment);
    printf("Balance remaining after second payment: %.2f\n", balanceSecondPayment);
    printf("Balance remaining after third payment: %.2f\n", balanceThirdPayment);

    return 0;
}
