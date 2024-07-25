//19. Write a program in C for adding two matrices of the same size.

#include<stdio.h>

int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int n,i,j;

	printf("how many elements: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element in array 1st: ");
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element in array 2nd: ");
			scanf("%d",&b[i][j]);
		}
		//printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}