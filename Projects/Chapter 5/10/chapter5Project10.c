/* Converts a numerical grade into a letter grade. */

#include <stdio.h>

int main(void)
{
    int numericalGrade, firstDigit;

    printf("Enter numerical grade: ");
    scanf("%d", &numericalGrade);

    firstDigit = numericalGrade/10;

    if(numericalGrade < 0 || numericalGrade > 100) {
        printf("Illegal grade.\n");
        return 0;
    }

    switch(firstDigit)
    {
        case 10:
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F\n");
            break;

    }

    return 0;
}
