#include <stdio.h>
#define size 30

void accept_A(int a[size][size], int r, int c )
{
	
	int i,j;
	
	printf("\nenter values for array \n");
	for(i=0;i<r;i++) //accept and store the number for array A
	{
		for(j=0;j<c;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
		}
	}
}


{
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
	int a[size][size];
	int b[size][size];
	int sum[size][size];
	int r,c;
	
	printf("how many rows: ");
	scanf("%d",&r);

	printf("how many cols: ");
	scanf("%d",&c);

	accept_A(a,r,c);
	accept_B(b,r,c);
	


}