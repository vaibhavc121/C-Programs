#include<stdio.h>

int main()
{
	int i,no,sum=0;

	printf("no: ");
	scanf("%d",&no);

	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			//printf("%d",i);
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}


	
}