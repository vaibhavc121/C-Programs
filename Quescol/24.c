//24.C Program to calculate the power without using POW function.

#include<stdio.h>

int main()
{
	int b,e,i,res=1;

	printf("enter the value of base: ");
	scanf("%d",&b);

	printf("enter the value of exponent: ");
	scanf("%d",&e);

	for(i=1;i<=e;i++)
	{
		res=res*b;
	}

	printf("%d",res);
}