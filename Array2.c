#include<stdio.h>
#include<stdlib.h>

void arraySum (int i,int element,int sum)
{
	sum = 0;
	i = 0;
	element = 0;

	int myNumberArray [10] = {1,1,2,3,4,5,6,7,8,9};


	printf("Here are the elements accordingly:");

	while(element < 10)
	{
		printf("\nelement -%d:",element);

		(i < 10);
		{
			printf("%d",myNumberArray[i]);

			sum = sum + myNumberArray[i];

			i++;
			element++;
		}
	}

	printf("\nThe sum of the elements is %d",sum);
}

int main()
{
	int i,element,sum;

	arraySum (i,element,sum);

	return 0;
}
