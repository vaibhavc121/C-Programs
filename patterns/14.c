#include<stdio.h>

int main()
{
	int i,j;

	for(i=7;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i-j);
		}
		printf("\n");
	}
}