#include<stdio.h>

int main()
{
	int a[10],i,sum,n;

	printf("enter array length: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter nos: ");
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		/*if(a[i]%2==0)
		{
			sum=sum+a[i];
		}*/
		
	}

	printf("sum of even array: %d\n",sum);
	printf("sum of odd array: %d\n",sum);
	printf("array elements: ");
	for(i=0;i<n;i++)
	{

		printf("%d ",a[i]);
	}
	
	
}