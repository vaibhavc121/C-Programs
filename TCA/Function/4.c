#include<stdio.h>

int prime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			break;
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

int positive(int num)
{
	if(num>=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int even_odd(int num)
{
	if(num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int is_negative(int num)
{
	if(num<0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int is_perfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int is_armg(int num)
{
	int rem,ans=0,tnum;
	tnum=num;
	while(num>0)
	{
		rem=num%10;
		ans=ans+(rem*rem*rem);
		num=num/10;
	}
	if(ans==tnum)
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
		printf("%d is prime\n",num);
	}
	else
	{
		printf("%d is not prime\n",num);
	}

	rval=positive(num);

	if(rval==1)
	{
		printf("%d is +ve\n",num);
	}
	else
	{
		printf("%d is -ve\n",num);
	}

	rval=even_odd(num);

	if(rval==1)
	{
		printf("%d is even\n",num);
	}
	else
	{
		printf("%d is odd\n",num);
	}

	rval=is_negative(num);

	if(rval==1)
	{
		printf("%d is -ve\n",num);
	}
	else
	{
		printf("%d is +ve\n",num);
	}

	rval=is_perfect(num);

	if(rval==1)
	{
		printf("%d is perfect\n",num);
	}
	else
	{
		printf("%d is not perfect\n",num);
	}

	rval=is_armg(num);

	if(rval==1)
	{
		printf("%d is armg\n",num);
	}
	else
	{
		printf("%d is not armg\n",num);
	}





	return 0;
}