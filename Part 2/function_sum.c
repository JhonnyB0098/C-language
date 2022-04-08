#include <stdio.h>

int sum(int a, int b);

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int a,b;
    int c;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    c = sum(a , b);
    printf("The value of c is : %d", c);
    return 0;
}

