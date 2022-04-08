#include<stdio.h>

int main()
{
    int a,b,c;
    FILE *ptr;
    ptr= fopen("num.txt", "r");
    fscanf(ptr,"%d %d %d", &a,&b,&c);
    printf("The values are %d %d %d",a,b,c);
    return 0;
}