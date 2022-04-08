#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter value of A : ");
    scanf("%d", &a);
    (a>5)? printf("A is greater than 5") : printf("A is less than 5");
    getch();
    return 0;
}