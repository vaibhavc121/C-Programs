#include <stdio.h>

void accept(int a[30][30], int m, int n)
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter no: ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}

void display(int a[30][30], int m, int n)
{
	int i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//printf("enter no: ");
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
/*
void addition(int a[30][30], int b[30][30])
{
	int i,j;
	printf("%d", a[i][j]+b[i][j]);	
}
*/
int main()
{
	int a[30][30];
	int b[30][30];
	int sum[30][30];
	int m,n;

	printf("how many rows: ");
	scanf("%d", &m);
	
	printf("how many cols: ");
	scanf("%d", &n);

	accept(a,m,n);
	display(a,m,n);

	accept(b,m,n);
	display(b,m,n);


	//sum[i][j]=a[i][j]+b[i][j];
	


	return 0;
}