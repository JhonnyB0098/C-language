#include<stdio.h>

int main()
{
    int num1,num2,num3;
    FILE *ptr;
    ptr= fopen("file_a.txt", "r");
    fscanf(ptr,"%d", &num1);
    printf("The first value stored in file is %d\n", num1);
    fscanf(ptr,"%d", &num2);
    printf("The second value stored in file is %d\n", num2);
    fscanf(ptr,"%d", &num3);
    printf("The third value stored in file is %d\n", num3);
    return 0;
}