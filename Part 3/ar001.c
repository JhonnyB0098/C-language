#include <stdio.h>
#include <conio.h>
int main()
{
    int mark[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the marks %d student : ", i);
        scanf("%d", &mark[i]);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("The marks of student %d are %d\n", i, mark[i]);
    }
    return 0;
}