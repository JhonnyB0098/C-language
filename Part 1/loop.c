#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a<14){
        printf("%d\n",a);
        a++;
    }
    getch();
    return 0;
}