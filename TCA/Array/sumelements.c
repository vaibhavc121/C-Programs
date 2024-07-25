#include<stdio.h>

int main()
{
	int a[20];
	int no,i,j,sum=0;

	printf("how many elements in the array: ");
	scanf("%d",&no);

	for(i=0;i<no;i++)
	{
		printf("enter elements: ");
		scanf("%d", &a[i]);	
	}

	printf("\nsum of even");

	for(i=0;i<no;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			
		}
	}
	printf("\n%d ",sum);

	printf("\nodd");

	for(i=0;i<no;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d ",a[i]);
		}
	}

	printf("\n+ve");

	for(i=0;i<no;i++)
	{
		if(a[i]>0)
		{
			printf("%d ",a[i]);
		}
	}


 	printf("\n-ve");
	for(i=0;i<no;i++)
	{
		if(a[i]< 0)
		{
			printf("%d ",a[i]);
		}
	}


	for(i=0;i<no;i++)
	{

	}



	printf("\nprime");

	for(i=0;i<no;i++)
	{

		for(j=2;j<no;j++)
		{
			if(a[i]%j==0)
			{
				break;
			}
		}

		if(i==a[i])
		{
			printf("%d ",a[i]);
		}
		
	}
}

