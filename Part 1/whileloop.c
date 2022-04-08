#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter a value = ");
    scanf("%d", &i);

    while(i<20)
    {
        printf("The value after inc is %d\n", i);
        i++;
    }
    return 0;
    getch();
}