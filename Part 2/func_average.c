#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    printf("The average of %d,%d,%d is %.3f", a, b, c, average(a, b, c));
    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}