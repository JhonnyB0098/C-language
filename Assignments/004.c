#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    if (n % 21 == 0)
        printf("Number is multiple of 3 and 7 both");
    else if (n % 3 == 0)
        printf("Number is multiple of 3", n);
    else if (n % 7 == 0)
        printf("Number is multiple of 7", n);
    else
        printf("Number is neither multiple of 3 nor 7");
    getch();
    return 0;
}