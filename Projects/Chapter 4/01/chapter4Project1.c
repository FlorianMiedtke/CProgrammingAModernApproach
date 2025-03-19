/* Asks user to enter a two-digit number, then prints the number with its digits reversed. */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int numLastDigitRemoved = num / 10;
    int numLastDigit = num % 10;

    printf("The reversal is: %d%d\n", numLastDigit, numLastDigitRemoved);

    return 0;
}
