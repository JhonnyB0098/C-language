#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    char name[20];
    float salary;
} emp ;

void show(emp emp1){
    printf("The Employee Code is %d\n", emp1.code);
    printf("The Employee Name is %s\n", emp1.name);
    printf("The Employee salary id %.3f\n", emp1.salary);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 1001;
    strcpy(ptr->name,"Jhonny");
    ptr->salary = 292.44;
    show(e1);
    return 0;
}