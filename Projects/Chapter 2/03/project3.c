#include <stdio.h>

int main(void)
{
    float pi = 3.14159265359;
    int r;

    printf("Enter sphere radius: ");
    scanf("%d", &r);

    float v = 4.0f/3.0f * pi * r*r*r;

    printf("V = %.2f m^3\n", v);
    return 0;
}
