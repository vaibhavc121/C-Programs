#include<stdio.h>


int max(int a,int b,int c,int d)
{
	
	if(a>b || a>c || a>d)
	{
		return 1;
	}
	else if(b>a || b>c || b>d)
	{
		return 1;
	}
	else if(c>a || c>b || c>d)
	{
		return 1;
	}
	else
	{
		return 1;
	}


}

int main()
{
	int a=3,b=4,c=6,d=5,val;
	val=max(a,b,c,d);

	printf("%d",val);
}

