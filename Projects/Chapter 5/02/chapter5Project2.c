/* Asks the user for a 24-hour time, then displays the time in 12-hour form. */

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if(hour > 12)
    {
        hour -= 12;
        printf("Equivalent 12-hour time: %02d:%02d PM\n", hour, minute);
    }
    else
    {
        printf("Equivalent 12-hour time: %02d:%02d AM\n", hour, minute);
    }

    return 0;
}
