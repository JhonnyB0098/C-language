#include <stdio.h>
int main()
{
    int num = 1, i, count;
    while (num <= 100)
    {
        i = 2;
        count = 0;
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        if (count != 0 && num != 1)
            printf("%d\n", num);
        num++;
    }
    return 0;
}