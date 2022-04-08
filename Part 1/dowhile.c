#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter a value : ");
    scanf("%d", &i);
    do
    {
        printf("The value of i is %d\n", i);
        i--;
    }while(i>0);
    return 0;
    getch();
}