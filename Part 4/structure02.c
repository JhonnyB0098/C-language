#include<stdio.h>
#include <conio.h>
#include<string.h>
struct employe{
    int code;
    char name[20];
    float salary;
};
int main()
{
    struct employe e1={100, "Jhonny", 788.33};
    printf("Employee Code : %d\n", e1.code);
    printf("Name : %s\n", e1.name);
    printf("Salary :%.3f\n", e1.salary);
    return 0;
}