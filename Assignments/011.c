#include<stdio.h>
int main()
{
    int i= 100, a=100, b=200;
    printf("Range : %d to %d ",a,b);
    while(i>=100 && i<200)
    {
        printf("\n%d", i);
        i=i+2;
    }
    getch();
    return 0;
}