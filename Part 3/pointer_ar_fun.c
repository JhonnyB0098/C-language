#include <stdio.h>

void printArray(int *ptr, int n);

int main()
{
    int ar[] = {2, 23, 57, 38, 35, 37, 39, 33, 23, 45, 354, 54, 34, 34, 34, 22};
    int size = sizeof ar / sizeof *ar;
    printArray(ar, size);

    return 0;
}

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + 1));
    }
}