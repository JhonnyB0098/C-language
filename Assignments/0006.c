#include <stdio.h>

int main()
{
    int m1[3][3], m2[3][3], result[3][3], row, col, sum = 0, i;

    printf("Enter value for m1 matrix");

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            scanf("%d", &m1[row][col]);
        }
    }

    printf("Enter value for m2 matrix");

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
            for (i = 0; i < 3; i = i + 1)
            {
                sum = sum + m1[row][i] * m2[i][col];
            }
            result[row][col] = sum;
            sum = 0;
        }
    }

    printf(" Multiplication of m1 and m2=\n\n");

    for (row = 0; row < 3; row = row + 1)
    {
        for (col = 0; col < 3; col = col + 1)
        {
            printf(" %d\t", result[row][col]);
        }
        printf("\n");
    }
}