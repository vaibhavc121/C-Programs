//1. Write a program in C to store elements in an array and print them.

#include<stdio.h>

int main()
{
	int a[30];
	int n,i;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	printf("entered array: ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
		
	}

}