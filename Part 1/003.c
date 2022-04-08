#include<stdio.h>
#include<conio.h>
int main(){
    int rating;
    printf("Rate our product from 1 to 5:");
    scanf("%d", &rating);
    switch (rating){
        case 1:
        printf("We are average\n");
        break;
        case 2:
        printf("We are good\n");
        break;
        case 3:
        printf("We are better\n");
        break;
        case 4:
        printf("We are best\n");
        break;
        case 5:
        printf("We are unbeatable\n");
        break;
        default:
        printf("Thanks for your valuable rating");
        break;
    }
    getch();
    return 0;
}