#include<stdio.h>

int main()
{
	int m;

	printf("enter the month: ");
	scanf("%d",&m);

	if(m==1)
	{
		printf("31");
	}
	else if(m==2)
	{
		printf("28/29");
	}
	
	else if(m==3)
	{
		printf("31");
	}
	else if(m==4)
	{
		printf("30");
	}
	else
	{
		printf("invalid");
	}
/*
	for(i=1;i<=12;i++)
	{
		if(m%2==0)
		{
			printf("30");
		}
		else
		{
			printf("31");
		}

	}*/

}