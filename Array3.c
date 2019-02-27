#include<stdio.h>
#include<stdlib.h>

int main()  
{
	int array[10];
	int i,sum;
	sum = 0;

	printf("\nEnter 10 element of array:");

	for(i = 0;i < 10;i++)
	{
		printf("\nelement - %d: ",i);
		scanf("%d",&array[i]);
	}

	printf("\nThe elements in array are: ");

	for(i = 0;i < 10;i++)
	{
		printf("%d ",array[i]);

		sum = sum + array[i];
	}
	

	printf("\nThe sum of the elements is :%d",sum);

	return 0;
}


