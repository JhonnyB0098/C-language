#include <stdio.h>
int main()
{
    char op;
    float first, second;
    printf("Enter first operand: ");
    scanf("%f", &first);
    printf("Enter second operand: ");
    scanf("%f", &second);
    printf("Enter an operator (+, -, *, / ): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%f + %f = %f", first, second, first + second);
        break;
    case '-':
        printf("%f - %f = %f", first, second, first - second);
        break;
    case '*':
        printf("%f * %f = %f", first, second, first * second);
        break;
    case '/':
        printf("%f / %f = %f", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}