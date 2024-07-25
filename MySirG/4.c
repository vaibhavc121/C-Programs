#include<stdio.h>

int sum(int a[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	//printf("%d",sum);
	return sum;
}
	

	void main()
	{
		int a[30]={1,2,3,4,5};


		printf("%d",sum(a));
	}
