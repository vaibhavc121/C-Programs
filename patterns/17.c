#include<stdio.h>

int main()
{
	int i,j,no=66;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",no-j);
			
		}
		printf("\n");
		++no;
	}
}