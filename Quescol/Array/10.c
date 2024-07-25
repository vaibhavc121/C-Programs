//10.C program to print array in reverse Order.

#include<stdio.h>

int main()
{
	int a[30];
	int n,max,i,j;

	printf("enter array size: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}

}