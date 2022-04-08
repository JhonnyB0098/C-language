#include<stdio.h>

int main()
{
    int i=43;
    char a = 'b';
    int *ptr=&i;
    printf("The value of pointer is %u\n", ptr);
    ptr++;
    printf("The value of pointer after incriment is %u\n", ptr);

    char c = 46;
    char *ptr2 = &c;
    printf("The value of pointer is %u\n", ptr2);
    ptr2++;
    printf("The value of pointer after incriment is %u\n", ptr2);
    ptr2 + 1;
    printf("The value of pointer after adding 1 is %u\n", ptr2);
    return 0;
}