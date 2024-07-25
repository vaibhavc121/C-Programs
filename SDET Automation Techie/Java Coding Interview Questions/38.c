//38.Sum of the odd and even number
#include<stdio.h>

int main()
{
	int n,i;
	int sum=0;

	printf("enter the term: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}		
	}
	printf("sum of 1st %d even nos: %d \n",n,sum);

	sum=0;

	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}		
	}
	printf("sum of 1st %d odd nos: %d",n,sum);

}