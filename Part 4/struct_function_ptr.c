#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    char name[20];
    float salary;
};
void show(struct employee emp){
    printf("The Employee code is %d\n", emp.code);
    printf("The Employee name is %s\n", emp.name);
    printf("The Employee salary is %.3f\n", emp.salary);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code=101;
    strcpy(ptr->name,"Jhonny");
    ptr->salary=2000.34;
    show(e1);
    return 0;
}