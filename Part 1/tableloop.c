#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, a;
    printf("Enter the number for table : ");
    scanf("%d",&a);
    while(i<11)
    {
        printf("%d x %d = %d\n", a,i,a*i);
        i++;
    }
    return 0;
    getch();
}