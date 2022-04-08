#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr= fopen("fputcdemo.txt", "w");
    putc('T',ptr);
    putc('h',ptr);
    putc('i',ptr);
    putc('s',ptr);
    return 0;
}