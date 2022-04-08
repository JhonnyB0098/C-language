#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    printf("The size of int is %d", sizeof(int));
    ptr=(int*)malloc(6*sizeof(int));
    return 0;
}