#include<stdio.h>

void naturalNumbers(int n,int sum)
{
	n = 1;

	printf("\nThe first 7 natural numbers are: ");

	while (n <= 7)
	{
		printf("\nn = %d",n);
		n++;

		sum = n + (n * 2 + 4);

	}

	printf("\nThe sum of the natural numbers up to 7 is %d",sum);
	
}

int main()
{
	int n,sum;
		

	naturalNumbers (n,sum);

	return 0;
}
