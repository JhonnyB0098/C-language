#include <stdio.h>
int main()
{
    int i = 0, n = 7, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The value of factorial of %d is %d", n, fact);
    return 0;
}