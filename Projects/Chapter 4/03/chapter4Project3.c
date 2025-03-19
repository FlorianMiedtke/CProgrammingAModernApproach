/* Asks user to enter a three-digit number, then prints the number with its digits reversed. */

#include <stdio.h>

int main(void)
{
    int firstDigit, middleDigit, lastDigit;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &firstDigit, &middleDigit, &lastDigit);

    printf("The reversal is: %d%d%d\n", lastDigit, middleDigit, firstDigit);

    return 0;
}
