#include <stdio.h>
void display();
void run();
int main(){
    int a,b,c;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d",&b);
    display();
    return 0;
}
void display(){
    int a,b;
    printf("Sum = %d", a+b);
}