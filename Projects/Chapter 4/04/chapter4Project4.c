/* Reads an integer entered by the user and displays it in octal. */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    int octalDigit5 = num % 8;
    int octalDigit4 = num / 8 % 8;
    int octalDigit3 = num / 8 / 8 % 8;
    int octalDigit2 = num / 8 / 8 / 8 % 8;
    int octalDigit1 = num / 8 / 8 / 8 / 8 % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", octalDigit1, octalDigit2, octalDigit3, octalDigit4, octalDigit5);

    return 0;
}
