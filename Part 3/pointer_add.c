#include<stdio.h>

int main()
{
    int a=32;
    int b=45;
    int *ptr= &a;
    int *ptr_ptr= &b;
    printf("Sum of pointers is %u\n", ptr+ptr_ptr);
    return 0;
}