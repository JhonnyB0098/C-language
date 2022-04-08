#include <stdio.h>
#include <conio.h>
int main()
{
  int r;
  printf("Enter year : ");
  scanf("%d", &r);
  if (((r % 4 == 0) && (r % 100 != 0)) || (r % 400 == 0))
  {
    printf("%d is a leap year");
  }
  else
  {
    printf("%d is not a leap year");
  }
  getch();
  return 0;
}