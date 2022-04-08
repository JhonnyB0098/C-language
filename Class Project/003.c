#include<stdio.h>
void main()
{
    int eng , math , hindi , total;
    printf("marks in eng,hindi,math:");
    scanf("%d%d%d", &eng,&hindi,&math);
    total=eng+hindi+math;
    printf("total marks:%d",total);
    getch();
}