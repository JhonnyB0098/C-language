#include <stdio.h>
// initialization of array...
int main()
{
    int a[5];
    int i = 0;
    printf("Enter 5 values");
    while (i < 5)
    {
        scanf("%d", &a[i]);
        i = i + 1;
    }

    printf("\n You have entered the following value \n");
    i = 0;
    while (i < 5)
    {
        printf(" %d \t", a[i]);
        i = i + 1;
    }
}