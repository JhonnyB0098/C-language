#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i, countwspace, countwospace;
    printf("Enter any sentence : ");
    gets(str);
    for (i = 0; str[i] != ' '; i++)
    {
        countwspace++;
    }
    for (i = 0; i < countwspace; i++)
    {
        if (str[i] == '\0')
            countwspace++;
    }
    countwospace = countwspace - countwospace;
    printf("\n Number of characters (with space)= %d", countwspace);
    printf("\n Number of characters (without space)= %d", countwospace);
    return 0;
}