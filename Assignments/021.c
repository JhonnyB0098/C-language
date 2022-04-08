#include <stdio.h>
int main()
{
    int i = 0, n;
    float sum, avg, num;
    sum = 0;

    printf("How many numbers you want to find sum and average:");
    scanf("%d", &n);

    printf("Enter the numbers:");

    do
    {
        scanf("%f", &num);
        sum = sum + num;
        i++;
    }

    while (i < n);

    avg = sum / n;

    printf("Sum=%f\n", sum);
    printf("Average=%f\n", avg);
    return 0;
}