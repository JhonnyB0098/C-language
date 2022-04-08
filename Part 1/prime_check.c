#include <stdio.h>
int main()
{
    int n = 45, i, prime;
    for (i = 2; i < 45; i++)
    {
        if (n % i == 0)
        {
            printf("This is not prime number");
            prime = 1;
            break;
        }
    }
    return 0;
}