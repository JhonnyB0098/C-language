#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg);

int main()
{
    int i,j;
    int sum;
    float avg;
    printf("Enter the first value : ");
    scanf("%d", &i);
    printf("Enter the second value : ");
    scanf("%d", &j);
    sumAndAvg(i,j, &sum, &avg);
    printf("The sum of numbers = %d\n", sum);
    printf("The average of numbers = %.2f\n", avg);
    return 0;
}

void sumAndAvg(int a, int b, int *sum , float *avg)
{
    *sum = a+b;
    *avg = *sum/2;    
}