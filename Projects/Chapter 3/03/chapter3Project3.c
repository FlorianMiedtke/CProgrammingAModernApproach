/* Breaks down an ISBN entered by the user. */

#include <stdio.h>

int main(void)
{
    int gsiPrefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GSI prefix: %d\n", gsiPrefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}
