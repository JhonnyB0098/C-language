 # include <stdio.h>
 //searching of a given element...
int main()
{
	int a[5],item;
	
    int i=0;
    printf("Enter 5 values: ");
    while(i<5)
    {
    	scanf("%d",&a[i]);
    	i=i+1;
	}
	
	printf("Enter value to be searched in array: ");
	scanf(" %d ",&item);
	
	i=0;
	while(i<5)
	{
		if (a[i]==item)
		{
			printf("\n %d is found in array at index = %d",item,i);
			break;
		}
		i=i+1;
	}
	if (i==5)
	{
		printf("Item is not found in array");
	}
    return 0;
}