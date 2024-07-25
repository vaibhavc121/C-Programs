#include<stdio.h>

int main()
{
	int i,j;
	int a,b;

	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}