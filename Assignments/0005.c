#include <stdio.h>

int main()
{
    int m1[3][3], m2[3][3], result[3][3], row, col;

    printf("Enter 9 value for m1 matrix");

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            scanf("%d", &m1[row][col]);
        }
    }

    printf("Enter 9 value for m2 matrix");

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            scanf("%d", &m2[row][col]);
        }
    }

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            result[row][col] = m1[row][col] + m2[row][col];
        }
    }

    printf("\n Addition of m1 and m2=\n\n");

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            printf(" %d\t", result[row][col]);
        }
        printf("\n");
    }
}