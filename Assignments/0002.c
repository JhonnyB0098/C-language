#include <stdio.h>
// deletion of array...
int main()
{
    int a[5], i, loc;

    printf("Enter 5 values");
    for (i = 0; i < 5; i = i + 1)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter location for deletion");
    scanf("%d", &loc);

    for (i = loc; i < 5; i = i + 1)
    {
        a[i] = a[i + 1];
    }

    for (i = 0; i < 4; i = i + 1)
    {
        printf("\n %d", a[i]);
    }
}