#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int xSquared = x * x;
    int xCubed = xSquared * x;
    int xPowerOfFour = xCubed * x;
    int xPowerOfFive = xPowerOfFour * x;

    int formula = 3*xPowerOfFive + 2*xPowerOfFour - 5*xCubed - xSquared + 7*x - 6;
    printf("Result: %d\n", formula);

    return 0;
}
