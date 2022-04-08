#include <stdio.h>
int main()
{
    int a = 200;
    while (a >= 50)
    {
        if (a % 2 == 1)
            printf("%d\n", a);
        a--;
    }
    return 0;
}