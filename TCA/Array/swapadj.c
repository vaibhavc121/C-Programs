#include<stdio.h>

int main()
{
	int a[20]={1,3,2,4,5,6};
	int i,temp;

	for(i=0;i<6;i=i+2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}

	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}


}

