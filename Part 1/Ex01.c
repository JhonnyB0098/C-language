#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do{
        printf("%d\t", i+1 );
        i++; 
    }while(i<n);
}