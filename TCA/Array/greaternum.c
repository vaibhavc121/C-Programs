#include<stdio.h>

int main()
{
	int a[100];
	int n,i,max;

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

	max=a[0];

	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}

	printf("\ngreater number in array is %d", max);
	


	
	
}
