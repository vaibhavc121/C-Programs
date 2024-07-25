#include<stdio.h>

int max(int a[])
{
	int i,max,maxindex=0;
	max=a[0];

	for(i=1;i<4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxindex=i;
		}
	}

	return maxindex;
}



int main()
{
	int a[10]={1,2,3,4};

	printf("%d",max(a));
}