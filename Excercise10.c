#include<stdio.h>

int multiplication (int num1,int num2)
{
	int product = num1 * num2;
	return product;
}

int main()
{
	int num1,num2,product;

	printf("Please enter two numbers: ");

	printf("\nNumber 1: ");
	scanf("%d",&num1);

	printf("\nNumber 2: ");
	scanf("%d",&num2);

	product = multiplication(num1,num2);

	printf("The product of the two numbers is %d",product);

	return 0;
}
