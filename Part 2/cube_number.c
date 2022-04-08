#include <stdio.h>
#include <math.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    printf("The cube of %d is :%.2f", no ,pow(no, 3));
    return 0;
}