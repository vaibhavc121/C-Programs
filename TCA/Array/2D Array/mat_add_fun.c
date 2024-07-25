#include <stdio.h>

void mat_add(int a[30][30],int b[30][30], int sum[30][30] )
{
	int r,c;
	int i,j;

	printf("how many rows: ");
	scanf("%d",&r);

	printf("how many cols: ");
	scanf("%d",&c);
	
	printf("\nenter values for array A\n");
	for(i=0;i<r;i++) //accept and store the number for array A
	{
		for(j=0;j<c;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
		}
	}

	//printf("\n");
	printf("\nenter values for array B\n");
	for(i=0;i<r;i++) ////accept and store the number for array B
	{
		for(j=0;j<c;j++)
		{
			printf("enter no: ");
			scanf("%d",&b[i][j]);
		}
	}

	printf("\narray A\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			//printf("enter no: ");
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	//printf("\n");
	printf("\narray B\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			//printf("enter no: ");
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	//printf("\n");
	printf("\nmatrix addition\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");

	}
}

int main()
{
	int a[30][30];
	int b[30][30];
	int sum[30][30];
	

	mat_add(a,b,sum);


}