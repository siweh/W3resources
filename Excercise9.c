#include<stdio.h>

int addition (int num1,int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int num1,num2,sum;

	printf("Please enter two numbers ");

	printf("\nNumber1: ");
	scanf("%d",&num1);

	printf("\nNumber2: ");
	scanf("%d",&num2);

	sum = num1 + num2;

	printf("The sum of the two numbers is %d",sum);
	
	return 0;
}
