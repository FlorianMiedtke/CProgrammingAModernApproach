/* Accepts a date from the user in the form mm/dd/yyyy and displays it in the form yyyymmdd */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date ");
    printf("%d%d%d\n", year, month, day);

    return 0;
}
