/* Calculates how many digits a number contain. Maximum 4 digits. */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <=9)
    {
        printf("The number %d has 1 digit\n", num);
    }
    else if (num <=99)
    {
        printf("The number %d has 2 digits\n", num);
    }
    else if (num <=999)
    {
        printf("The number %d has 3 digits\n", num);
    }
    else if (num <=9999)
    {
        printf("The number %d has 4 digits\n", num);
    }
    else if (num >9999)
    {
        printf("The number %d is too big\n", num);
    }

    return 0;
}
