#include<stdio.h>

int main()
{
	int a[20]={1,3,2,4,4,6};
	int temp,i;

	temp=a[0];

	for(i=0;i<5;i++)
	{
		a[i]=a[i+1];
	}

	a[i]=temp;

	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}



}

