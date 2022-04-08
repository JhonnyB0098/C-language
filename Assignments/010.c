#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned char s1, s2;
    char item1[20], item2[20];
    unsigned int qty1, qty2;
    float price1, price2;
    printf("Enter Item no.1: ");
    scanf("%s", &item1);
    fflush(stdin);
    printf("Enter Quantity for %s: ", item1);
    scanf("%u", &qty1);
    fflush(stdin);
    printf("Enter price for %s: ", item1);
    scanf("%f", &price1);
    fflush(stdin);
    printf("\nEnter Item no.2: ");
    scanf("%s", &item2);
    fflush(stdin);
    printf("Enter Quantity for %s: ", item2);
    scanf("%u", &qty2);
    fflush(stdin);
    printf("Enter price for %s: ", item2);
    scanf("%f", &price2);
    fflush(stdin);
    printf("S no.\tItem\tPrice\tQuantity\tTotal_Price\tGST@18%\tTotal");
    printf("\n-----------------------------------------------------------------\n");
    printf("\n1.\t%s\t%4.2f\t%4u\t%4.2f\t%4.2f\t%4.2f", item1, price1, qty1, price1 * qty1, 0.18 * price1 * qty1, (price1 * qty1) + (0.18 * price1 * qty1));
    printf("\n2.\t%s\t%4.2f\t%4u\t%4.2f\t%4.2f\t%4.2f", item2, price2, qty2, price2 * qty2, 0.18 * price2 * qty2, (price2 * qty2) + (0.18 * price2 * qty2));
    printf("\n-----------------------------------------------------------------\n");
    getch();
    return 0;
}