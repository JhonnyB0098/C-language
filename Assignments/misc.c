#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first value: ");
    scanf("%d", &num1);
    printf("Enter second value: ");
    scanf("%d", &num2);

    while (num1 < 100 && num2 < 100)
    {
        if ((100 - num1) < (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num1);
        else if ((100 - num1) > (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num2);
        else if (num1 == num2)
            printf("Both numbers are equal");
        break;
    }
    while (num1 > 100 && num2 > 100)
    {
        if ((100 - num1) > (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num1);
        else if ((100 - num1) < (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num2);
        else if (num1 == num2)
            printf("Both numbers are equal");
        break;
    }
    while (num1 < 100 && num2 > 100)
    {
        if ((100 - num1) < (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num1);
        else if ((100 - num1) > (100 - num2))
            printf("%d is nearest to 100 among two given numbers", num2);
        else if (num1 == num2)
            printf("Both numbers are equal");
        break;
    }
    getch();
    return 0;
}