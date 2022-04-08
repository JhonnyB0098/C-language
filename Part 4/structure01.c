#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    struct employee
    {
        int code;
        float salary;
        char name[20];
    };
    struct employee e1;
    strcpy(e1.name, "Jhonny");
    e1.code = 100;
    e1.salary = 71.22;

    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%.3f\n", e1.salary);
    getch();
    return 0;
}