#include<stdio.h>

int main()
{
	int a[100];
	int n,i,min;

	printf("array elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element:  ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	min=a[0];

	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}

	printf("\nsmallest number in array is %d", min);
	


	
	
}
