//8. Find the Sum of the digit

#include<stdio.h>

int main()
{
	int n;
	int mod;
	int sum=0;

	printf("enter no: ");
	scanf("%d", &n);

	while(n>0)
	{
		mod=n%10;
		sum=sum+mod;
		n=n/10;
	}

	printf("sum: %d",sum);
	
}