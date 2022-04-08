#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, gue, ngue = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &gue);
        if (num > gue)
        {
            printf("Lower number please!\n");
        }
        else if (num < gue)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You have the right guess in %d attempts\n", ngue);
        }
        ngue++;
    } while (gue != num);
    getch();
    return 0;
}