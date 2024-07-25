#include<stdio.h>

int main()
{
	int a[20]={2,1,3,5,4};
	int i,j,temp;

	for(i=0;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}

}

