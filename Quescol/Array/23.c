//23.C Program to print all even numbers in array.

#include<stdio.h>

int main()
{
	int a[30];
	int b[30];
	int m,n,i,no;

	printf("enter array size: ");
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		printf("enter array element: ");
		scanf("%d", &a[i]);
	}

	printf("%d",sizeof(a)/sizeof(int));


	printf("enter array size: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d", &b[i]);
	}


	for(i=0;i<n;i++)
	{
		a[m+i]=b[i];
	}

	//printf("%d ",a[i]);

	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
}