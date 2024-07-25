//14.C program to insert element at a given location in Array.

#include<stdio.h>

int main()
{
	int a[30];
	int n,i,no;

	printf("enter array size: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d", &a[i]);
	}

	for(i=n-1;i>=1;i--)
	{
		a[i+1]=a[i];
	}

	printf("\nenter value for insert: ");
	scanf("%d",&no);

	a[4]=no;

	printf("\nnew array:");

	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	



}

