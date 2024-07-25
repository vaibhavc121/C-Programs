#include<stdio.h>

int main()
{
	int i,n;
	int a[10];

	printf("elements in array: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&a[i]);
	}
	

	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
}