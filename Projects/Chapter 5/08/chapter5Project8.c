/* Asks user to enter a time (expressed in hours and minutes, using the 24 hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user */

#include <stdio.h>

int main(void)
{
    int hours, minutes, minutesSinceMidnight;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutesSinceMidnight = hours * 60 + minutes;

    //determine possible "neighbours"
    if(minutesSinceMidnight >= 8*60 && minutesSinceMidnight10 <= 9*60+43)
    {

    }
    else if(minutesSinceMidnight10 <= 11*60+19)
    {

    }
    else if(minutesSinceMidnight10 <= 12*60+47)
    {

    }
    else if(minutesSinceMidnight10 <= 14*60)
    {

    }
    else if(minutesSinceMidnight10 <= 15*60+45)
    {

    }
    else if(minutesSinceMidnight10 <= 19*60)
    {

    }
    else if(minutesSinceMidnight10 <= 21*60+45)
    {

    }

    //determine closest neighbour
    return 0;
}
