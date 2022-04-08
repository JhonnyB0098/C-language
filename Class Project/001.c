#include<stdio.h>
int main()
{
   int i,a,r;
   a=10;
   i=1;
   start:
	if(i<=10)
	{
		r=a*i;
		printf("%d*%d=%d\n",a,i,r);
		i++;
		goto start;
	} getch();

	return 0;
}