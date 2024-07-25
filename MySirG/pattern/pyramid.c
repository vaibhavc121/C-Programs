#include<stdio.h>

int main()
{
	int i,j,r,c;

	printf("how many rows: ");
	scanf("%d", &r);

	

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=2*r-1;j++) 
		{
			if(j>=r+1-i && j<=r-1+i)
			{
				printf("%d",i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}