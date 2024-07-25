/*18. Write a program in C for a 2D array of size 3x3 and print the matrix.*/

#include<stdio.h>

int main()
{
	int a[4][4];
	int i,n,j;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter array element: ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	





}