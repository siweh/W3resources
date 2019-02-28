#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number,counter,limit;
	number = 0;
	counter = 0;
	limit = 0;

	printf("Please enter a number: ");
	scanf("%d",&number);

	printf("Please enter a limit number: ");
	scanf("%d",&limit);

	do
	{
		printf("%d x %d = %d \n",number,counter,(number * counter));
		counter++;

	}while(counter <= limit);


	return 0;
}
