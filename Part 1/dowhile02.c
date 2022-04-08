#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, a;
    printf("Enter value : ");
    scanf("%d", &a);
    do
    {
        printf("The number is %d\n", i);
        i++;
    }while(i<a);
    getch();
    return 0;
}