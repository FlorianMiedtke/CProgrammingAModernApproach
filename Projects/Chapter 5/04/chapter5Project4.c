/* Asks the user to enter a wind speed (in knots), then displays the corresponding description */

#include <stdio.h>

int main(void)
{
    int windSpeed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &windSpeed);

    if(windSpeed < 1)
    {
        printf("Calm\n");
    }
    else if(windSpeed >= 1 && windSpeed <= 3)
    {
        printf("Light air\n");
    }
    else if(windSpeed >= 4 && windSpeed <= 27)
    {
        printf("Breeze\n");
    }
    else if(windSpeed >= 28 && windSpeed <= 47)
    {
        printf("Gale\n");
    }
    else if(windSpeed >= 48 && windSpeed <= 63)
    {
        printf("Storm\n");
    }
    else if(windSpeed > 63)
    {
        printf("Hurricane\n");
    }
    else
    {
        printf("Not in scale\n");
    }

    return 0;
}
