/* finds the largest and smallest of four integers entered by the user */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, largest, largest2, largestFinal, smallest, smallest2, smallestFinal;

    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if(num1 > num2)
    {
        largest = num1;
        smallest = num2;
    }
    else
    {
        largest = num2;
        smallest = num1;
    }

    if(num3 > num4)
    {
        largest2 = num3;
        smallest2 = num4;
    }
    else
    {
        largest2 = num4;
        smallest2 = num3;
    }

    if(largest > largest2)
    {
        largestFinal = largest;
    }
    else
    {
        largestFinal = largest2;
    }

    if(smallest < smallest2)
    {
        smallestFinal = smallest;
    }
    else {
        smallestFinal = smallest2;
    }

    printf("Largest: %d\n", largestFinal);
    printf("Smallest: %d\n", smallestFinal);

    return 0;
}
