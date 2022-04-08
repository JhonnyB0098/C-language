#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fgetcdemo.txt", "r");
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr));
    printf("The character is %c\n", fgetc(ptr)); 
    return 0;
}