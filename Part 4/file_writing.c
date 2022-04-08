#include<stdio.h>

int main()
{
    int num= 344;
    FILE *wptr;
    wptr = fopen("generated.txt", "w");
    fprintf(wptr,"The value generated is %d",num);
    return 0;
}