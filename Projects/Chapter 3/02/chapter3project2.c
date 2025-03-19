/* Formats product information entered by the user. */

#include <stdio.h>

int main(void)
{
    int itemNumber, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("\nEnter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t$%7.2f\t\t%02d/%02d/%04d\n", itemNumber, price, month, day, year);

    return 0;
}
