#include <stdio.h>

int main()
{
    int i, n, Sum = 0, numbers;
    float avg;

    printf("Please Enter How many Number you want :");
    scanf("%d", &n);

    printf("Please Enter the numbers :");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &numbers);
        Sum = Sum + numbers;
    }

    avg = Sum / n;

    printf("Sum of the %d Numbers = %d", n, Sum);
    printf("\nAverage of the %d Numbers = %.2f", n, avg);

    return 0;
}