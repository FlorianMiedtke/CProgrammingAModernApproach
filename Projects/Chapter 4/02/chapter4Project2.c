/* Asks user to enter a three-digit number, then prints the number with its digits reversed. */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int firstDigit = num / 10 / 10;
    int middleDigit = num / 10 % 10;
    int lastDigit = num % 10;

    printf("The reversal is: %d%d%d\n", lastDigit, middleDigit, firstDigit);

    return 0;
}
