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
    struct employee e1 ,e2 , e3;
    printf("Enter the employee Code : ");
    scanf("%d",&e1.code);
    printf("Enter the employee Name : ");
    scanf("%s",e1.name);
    printf("Enter the employee Salary : ");
    scanf("%.3f",&e1.salary);
    printf("Enter the employee Code : ");
    scanf("%d",&e2.code);
    getch();
    printf("Enter the employee Name : ");
    scanf("%s",e2.name);
    printf("Enter the employee Salary : ");
    scanf("%.3f",&e2.salary);
    printf("Enter the employee Code : ");
    scanf("%d",&e3.code);
    getch();
    printf("Enter the employee Name : ");
    scanf("%s",e3.name);
    printf("Enter the employee Salary : ");
    scanf("%.3f",&e3.salary);
    getch();
    return 0;
}