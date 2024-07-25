#include<stdio.h>

int main()
{
	int a[4] [4]; //={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; 
	int i,j,m,n;

	printf("how many rows: ");
	scanf("%d", &m);
	
	printf("how many cols: ");
	scanf("%d", &n);


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
			
		}
		printf("\n");

	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}


	return 0;
}