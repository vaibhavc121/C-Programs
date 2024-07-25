//22. Write a program in C to find the transpose of a given matrix.
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
			printf("enter element in matrix: ");
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
		printf("\n");
	}


}