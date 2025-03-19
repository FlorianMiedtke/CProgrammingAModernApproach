/* Asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals */

#include <stdio.h>

int main(void)
{
    //Naming scheme: rxcx = row x, colum x
    int r1c1, r1c2, r1c3, r1c4, r2c1, r2c2, r2c3, r2c4, r3c1, r3c2, r3c3, r3c4, r4c1, r4c2, r4c3, r4c4;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &r1c1, &r1c2, &r1c3, &r1c4, &r2c1, &r2c2, &r2c3, &r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1, &r4c2, &r4c3, &r4c4);

    printf("\n%d %d %d %d\n", r1c1, r1c2, r1c3, r1c4);
    printf("%d %d %d %d\n", r2c1, r2c2, r2c3, r2c4);
    printf("%d %d %d %d\n", r3c1, r3c2, r3c3, r3c4);
    printf("%d %d %d %d\n\n", r4c1, r4c2, r4c3, r4c4);

    int row1sum = r1c1 + r1c2 + r1c3 + r1c4,
    row2sum = r2c1 + r2c2 + r2c3 + r2c4,
    row3sum = r3c1 + r3c2 + r3c3 + r3c4,
    row4sum = r4c1 + r4c2 + r4c3 + r4c4;

    int col1sum = r1c1 + r2c1 + r3c1 + r4c1,
    col2sum = r1c2 + r2c2 + r3c2 + r4c2,
    col3sum = r1c3 + r2c3 + r3c3 + r4c3,
    col4sum = r1c4 + r2c4 + r3c4 + r4c4;

    int diagonalLeftRightSum = r1c1 + r2c2 + r3c3 + r4c4,
    diagonalRightLeftSum = r1c4 + r2c3 + r3c2 + r4c1;

    printf("Row sums: %d %d %d %d\n", row1sum, row2sum, row3sum, row4sum);
    printf("Column sums: %d %d %d %d\n", col1sum, col2sum, col3sum, col4sum);
    printf("Diagonal sums: %d %d\n", diagonalLeftRightSum, diagonalRightLeftSum);

    return 0;
}
