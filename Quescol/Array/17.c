//14.C program to insert element at a given location in Array.

/*17. C Program to delete element from array at given index. */
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

	printf("\nenter position for dlt the no: ");
	scanf("%d",&no);

	for(i=no+1;i<n;i++)
	{
		a[i-1]=a[i];
	}

	

	//a[1]=no;

	printf("\nnew array:");

	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	



}

