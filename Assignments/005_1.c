#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    printf("Enter First number :");
    scanf("%d", &num1);
    printf("Enter Second number :");
    scanf("%d", &num2);
    if ((100 + num1) > (100 + num2))
        printf("%d is nearest to 100 among two given numbers", num1);
    else if ((100 + num1) < (100 + num2))
        printf("%d is nearest to 100 among two given numbers", num2);
    else if (num1 == num2)
        printf("Both numbers are equal");
    else
        printf("Invalid values for program");
    getch();
    return 0;
}