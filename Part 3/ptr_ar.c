#include<stdio.h>

int main()
{
    int ar[10];
    int *ptr=&ar[0];
    ptr=ptr+2;
    if(ptr==&ar[2]){
        printf("These have same location on memory\n");
    }
    else{
        printf("The do not share same location on memory\n");
    }
    return 0;
}