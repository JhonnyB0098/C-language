#include <stdio.h>
int main()
{
    printf("***Multiplication table of 10***\n");
    for (int i = 1; i<11; i++)
    {
        printf("!0 x %d = %d\n", i, 10 * i);
    }
    return 0;
}