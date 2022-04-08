#include<stdio.h>
#include<conio.h>
void main()
{
    int maths , science , english , social_science , hindi , total ;
    char name , section;
    float percentage;
    printf("Enter name of Student:");
    scanf(" %s", &name);
    printf("Enter Section:");
    scanf(" %c", &section);
    printf("\nEnter marks of student in Maths:");
    scanf(" %d", &maths);
    printf("Enter marks of student in Science:");
    scanf(" %d", &science);
    printf("Enter marks of student in Social Science:");
    scanf(" %d", &social_science);
    printf("Enter marks of student in Hindi:");
    scanf(" %d", &hindi);
    printf("Enter marks of student in English:");
    scanf(" %d", &english);
    getch();

    total=maths+science+english+social_science+hindi;
    percentage=total/5;
    printf("\nTotal Marks Obtained By Student:%d",total);
    printf("\nPercentage Obtained By Student:%.2f",percentage);
    getch();
}