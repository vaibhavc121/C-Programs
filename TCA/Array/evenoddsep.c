#include<stdio.h>

int main()
{
	int a[20]={1,2,3,4,5,6};
	int b[20],c[20],i,j=0,k=0;

	for(i=0;i<=5;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}

	for(i=0;i<j;i++)
	{
		printf("%d ",b[i]);
	}

	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}



}

