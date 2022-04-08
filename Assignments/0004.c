#include <stdio.h>
// insertion at a given index in array...
int main()
{
    int a[5], i, loc, item;

    printf("Enter 4 value: ");

    for (i = 0; i < 4; i = i + 1)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter location where new value will be inserted: ");
    scanf("%d", &loc);

    for (i = 4; i >= loc; i = i - 1)
    {
        a[i] = a[i - 1];
    }

    printf("Enter value to be inserted: ");
    scanf("%d", &item);

    a[loc] = item;

    printf("Array\t");

    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d\t", a[i]);
    }
}
