#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, first is %d and second is %d.", num1, num2);
    getch();
    return 0;
}
