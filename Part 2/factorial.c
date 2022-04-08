#include <stdio.h>
int fact(int x);
int main()
{
    int a;
    printf("Enter number for factorial : ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, fact(a));
    return 0;
}
int fact(int x)
{
    int f;
    if (x == 0 || x == 1)
        return 1;
    else
        f = x * fact(x - 1);
    return f;
}