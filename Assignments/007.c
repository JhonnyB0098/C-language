#include <stdio.h>
#include <conio.h>
int main()
{
    double b = 679999999.454;
    float a = 679999999.454;
    long double c = 3.14e+2;
    printf("\n%f", a);
    printf("\n%lf", b);
    printf("\n%Lf", c);
    getch();
    return 0;
}