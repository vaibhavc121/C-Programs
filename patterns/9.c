#include<stdio.h>

int main()
{
	int i,j,no=65;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",64+j);
			
		}
		printf("\n");
	}
	
}