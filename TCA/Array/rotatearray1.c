#include<stdio.h>

int main()
{
	int a[20]={1,3,2,4,5,6};
	int temp,i;

	temp=a[5];

	for(i=4;i>=1;i--)
	{
		a[i+1]=a[i];
	}

	a[i]=temp;

	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}



}

