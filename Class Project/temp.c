#include <stdio.h>
#include <conio.h>
void main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius:%.3f", celsius);
    getch();
}