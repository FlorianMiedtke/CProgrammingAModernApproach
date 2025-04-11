/* Asks the user to enter the amount of taxable income, then displays the tax due */

#include <stdio.h>

int main(void)
{
    float income, excessIncome, tax = 0;

    printf("Enter income: ");
    scanf("%f", &income);

    if(income < 750.0)
    {
        tax = income * 0.01;
    }
    else if(income >= 750.0 && income < 2250.0)
    {
        excessIncome = income - 750.0;
        tax = 7.5 + excessIncome * 0.02;
    }
    else if(income >= 2250.0 && income < 3750.0)
    {
        excessIncome = income - 750.0;
        tax = 37.5 + excessIncome * 0.03;
    }
    else if(income >= 3750.0 && income < 5250.0)
    {
        excessIncome = income - 750.0;
        tax = 82.5 + excessIncome * 0.04;
    }
    else if(income >= 5250.0 && income < 7000.0)
    {
        excessIncome = income - 750.0;
        tax = 142.5 + excessIncome * 0.05;
    }
    else if(income >= 7000.0)
    {
        excessIncome = income - 750.0;
        tax = 230.0 + excessIncome * 0.06;
    }

    printf("Tax due: %.2f\n", tax);

    return 0;
}
