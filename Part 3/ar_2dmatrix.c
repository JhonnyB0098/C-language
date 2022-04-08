#include<stdio.h>

int main()
{
    int n_stu =3;
    int n_sub =5;

    int marks[3][5];
    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("\nEnter the marks of %d student in %d subject : ", i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
        
    }
    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("The marks of %d student in %d subject are %d\n", i+1,j+1, marks[i][j]);
        }
        
    }
    
    return 0;
}