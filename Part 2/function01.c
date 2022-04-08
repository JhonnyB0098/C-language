#include<stdio.h>  
void display();    //function prototype

int main(){
    int a;
    printf("Print 1\n");
    display();           //function call
    printf("Print 2\n");
    return 0;
}
void display(){            //function defination
    printf("This sucks\n");
}