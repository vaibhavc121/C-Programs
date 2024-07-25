//Write a program in C to display the multiplier table vertically from 1 to n.
#include<stdio.h>

int main()
{
int n,i,j;

	printf("multiplication table from 1 : \n");
	scanf("%d",&n);

	printf("mutiplication table from 1 to %d\n", n);

	for(i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{

			printf("%dX%d = %d, ",j,i,i*j);
	
		}
		printf("\n");
	}


	
	return 0;
}