#include <stdio.h>

/*void accept(int a[30][30], int m, int n)
{
	int i;

	for(i=0;i<m;i++)
}
*/
int main()
{
	int a[30][30];
	int b[30][30];
	int sum[30][30];
	int m,n,i,j;

	printf("how many rows: ");
	scanf("%d", &m);

	printf("how many cols: ");
	scanf("%d", &n);

	//accept(a,m,n);

	printf("\nenter values for array A\n");
	for(i=0;i<m;i++) //accept and store the number for array A
	{
		for(j=0;j<n;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
		}
	}

	//printf("\n");
	printf("\nenter values for array B\n");
	for(i=0;i<m;i++) ////accept and store the number for array B
	{
		for(j=0;j<n;j++)
		{
			printf("enter no: ");
			scanf("%d",&b[i][j]);
		}
	}

	//printf("\n");
	printf("\narray A\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//printf("enter no: ");
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	//printf("\n");
	printf("\narray B\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//printf("enter no: ");
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	//printf("\n");
	printf("\nmatrix addition\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");

	}
}