/* Asks user to enter a time (expressed in hours and minutes, using the 24 hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user */

#include <stdio.h>

int main(void)
{
    int hours, minutes, minutesSinceMidnight;

    int depTime1 = 8*60,
    depTime2 = 9*60+43,
    depTime3 = 11*60+19,
    depTime4 = 12*60+47,
    depTime5 = 14*60,
    depTime6 = 15*60+45,
    depTime7 = 19*60,
    depTime8 = 21*60+45;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutesSinceMidnight = hours * 60 + minutes;

    if(minutesSinceMidnight < ((depTime2 - depTime1) / 2) + depTime1)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime3 - depTime2) / 2) + depTime2)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime4 - depTime3) / 2) + depTime3)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 a.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime5 - depTime4) / 2) + depTime4)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime6 - depTime5) / 2) + depTime5)
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime7 - depTime6) / 2) + depTime6)
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if(minutesSinceMidnight < ((depTime8 - depTime7) / 2) + depTime7)
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
