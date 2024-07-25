#include<stdio.h>

int main()
{
	int i,r,n;

	for(i=1;i<=1000;i++)
	{
		int sum=0;
		
		n=i;
		
		while(n>0)
		{
			r=n%10;
			sum=sum+(r*r*r);
			n=n/10;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
	
}