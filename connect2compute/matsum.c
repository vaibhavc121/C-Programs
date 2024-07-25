#include<stdio.h>

int main()
{
	int a[3][3];
	int i,j,sum=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element in the matrix: ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
			
		}
		
	}

	printf("%d",sum);




	
}

