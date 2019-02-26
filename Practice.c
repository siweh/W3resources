#include<stdio.h>

void avarageSum (int i,int n,int numbers,int sum,float avarage)
{

	sum = 0;
	i = 0;

	printf("\nHow many numbers you want to enter?: ");
	scanf("%d",&n);

	printf("\nPlease enter the numbers accordingly: \n");

	while(i < n)
	{
		scanf("%d",&numbers);
		sum = sum + numbers; 
		avarage = sum / n;
		i++;
	
	}


	printf("The sum of %d numbers is %d",n,sum);

	printf("\nThe avarage of %d numbers is %.2f",n,avarage);

}

int main()
{
	int i,n,numbers,sum,avarage;

	avarageSum (i,n,numbers,sum,avarage);
	
	return 0;
}
