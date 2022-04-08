#include<stdio.h>

void change (int b);

int main()
{
    int b=346;
    printf("b before change :\n", b);
    change(b);
    printf("b after change :\n", b);
    getch();
    return 0;
}

void change(int b)
{
    b=77;
}