#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int num, gue, ngue = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &gue);
        if (gue > num)
        {
            printf("Lower number please!\n");
        }
        else if (gue < num)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", ngue);
        }
        ngue++;
    } while (gue != num);
    getch();
    return 0;
}