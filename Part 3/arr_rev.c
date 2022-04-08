#include<stdio.h>

void reverse(int *ar, int n)
{
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = ar[i];
        ar[i] = ar[n-i-1];
        ar[n-i-1]= temp;
    }
}
int main()
{
    int ar[]={1,2,3,4,5,6,7,8};
    reverse(ar,8);
    for (int i = 0; i < 8; i++)
    {
       printf("The value of %d element is %d\n", i, ar[i]); 
    }
    
    return 0;
}