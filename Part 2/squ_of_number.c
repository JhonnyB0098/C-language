#include <stdio.h>
#include <math.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    printf("The square of %d is :%.2f", no ,pow(no, 2));
    return 0;
}