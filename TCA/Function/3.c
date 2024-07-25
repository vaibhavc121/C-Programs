#include<stdio.h>

int prime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			break();
		}
	}
	if(num==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int num,rval;

	printf("enter num: ");
	scanf("%d",&num);

	rval=prime(num);

	if(rval==1)
	{
		printf("%d is prime",num);
	}
	else
	{
		printf("%d is not prime",num);
	}

	return 0;
}