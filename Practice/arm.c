#include<stdio.h>

int main()
{
	int n,i,r,no,sum=0;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum=0;

		no=i;
		
		while(no>0)
		{
			r=no%10;
			sum=sum+(r*r*r);
			no=no/10;
		}

		if(sum==i)
		{
			printf("%d ",i);
		}

	}
	
}