#include <stdio.h>
int main()
{
    int i, n;
    unsigned fact;
    printf("Enter a number for factorial : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error! Factorial of negative numbers doesnot exist");
    }
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= 1;
        }
        printf("The factorial of %d is %u", n, fact);
    }
    return 0;
}