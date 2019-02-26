#include<stdio.h>

void avarageNumbers (int number,int n,int sum,float avarage)
{
	number = 1;
	n = 2;

	printf("This is the list of 10 numbers.");

	while(number <= 10)
	{
		printf("\nNumber - %d:",number);
		number++;

		(n <= 10);
	
			printf(" %d",n);
		sum = sum + n;
		avarage = sum / n;

		n++;
	}

		printf("\nThe sum of 10 numbers is %d",sum);


		printf("\nThe avarage of the numbers is %f",avarage);

}

int main()
{
	int number,n,sum;
	float avarage;

	avarageNumbers (number,n,sum,avarage);

	return 0;
}
