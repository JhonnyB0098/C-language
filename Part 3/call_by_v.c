#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 6;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The sum of a+b is %d\n", sum(a, b));
    printf("The value of a and b after function calls are %d and %d\n", a, b);

    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 2323;
    a = 4343;
    return c;
}