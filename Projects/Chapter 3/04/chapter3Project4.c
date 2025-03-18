#include <stdio.h>

int main(void)
{
    int numGroup1, numGroup2, numGroup3;

    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &numGroup1, &numGroup2, &numGroup3);

    printf("You entered %d.%d.%d\n", numGroup1, numGroup2, numGroup3);

    return 0;
}
