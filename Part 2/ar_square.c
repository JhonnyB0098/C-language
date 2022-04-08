#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the measure of side : ");
    scanf("%d", &side);
    printf("The area of square is :%.2f", pow(side, 2));
    return 0;
}