//1.Find the Factorial of the given number
#include<stdio.h>

int main()
{
	int fact=1,i,n;
	printf("enter no: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}

	printf("fact: %d",fact)	;
}