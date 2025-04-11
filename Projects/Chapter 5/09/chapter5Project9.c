/* Asks user to enter a time (expressed in hours and minutes, using the 24 hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user */

#include <stdio.h>

int main(void)
{
    int firstDateMonth, firstDateDay, firstDateYear,
    secondDateMonth,  secondDateDay, secondDateYear;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &firstDateMonth, &firstDateDay, &firstDateYear);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &secondDateMonth,  &secondDateDay, &secondDateYear);

    if(firstDateYear < secondDateYear)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,  secondDateDay, secondDateYear);
    }
    else if(firstDateYear > secondDateYear)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", secondDateMonth,  secondDateDay, secondDateYear, firstDateMonth, firstDateDay, firstDateYear);
    }
    else
    {
        if(firstDateMonth < secondDateMonth)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,  secondDateDay, secondDateYear);
        }
        else if(firstDateMonth > secondDateMonth)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", secondDateMonth,  secondDateDay, secondDateYear, firstDateMonth, firstDateDay, firstDateYear);
        }
        else
        {
            if(firstDateDay < secondDateDay)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", firstDateMonth, firstDateDay, firstDateYear, secondDateMonth,  secondDateDay, secondDateYear);
            }
            else if(firstDateDay > secondDateDay)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", secondDateMonth,  secondDateDay, secondDateYear, firstDateMonth, firstDateDay, firstDateYear);
            }
            else
            {
                printf("The dates are equal\n");
            }
            
        }
    }

    return 0;
}
