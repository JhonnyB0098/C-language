#include<stdio.h>

int main()
{
    char str[]= {'S','T','R','I','N','G','\0'};
    char *ptr=str;

    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}