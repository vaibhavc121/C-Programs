//3.Write a program in C to check given number is prime or not.

#include<stdio.h>

int main()
{
	int i,no;

	printf("enter no: ");
	scanf("%d",&no);

	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			break;
		}
	}

	if(no==i)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}


	
}