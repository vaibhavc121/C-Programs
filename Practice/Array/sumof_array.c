#include<stdio.h>

int main()
{
	int i,n,sum=0;
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
		sum=sum+a[i];
	}

	printf("sum: %d",sum);

	
}