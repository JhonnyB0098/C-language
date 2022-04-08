#include<stdio.h>
#include <string.h>
struct employee{
    int code;
    char name[20];
    float salary;
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    printf("Enter the employee code : ");
    scanf("%d", (*ptr).code);
    printf("\nThe employee code is %d", (*ptr).code);
    return 0;
}