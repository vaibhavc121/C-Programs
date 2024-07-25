#include <stdio.h>

int main()
{
	int a[2][2]={{1,1},{1,1}};
	int b[2][2]={{1,1},{1,1}};
	int sum[2][2];
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		 printf("\n");
	}
	
}