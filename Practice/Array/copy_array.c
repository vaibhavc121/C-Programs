#include<stdio.h>

int main()
{
	int i,n;
	int a[100];
	int b[100];

	printf("how many array elements: ");
	scanf("%d",&n);

	for(i=0;i<5;i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
	}

	printf("\n");

	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}

	printf("array B: ");

	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}

}