#include<stdio.h>

int main()
{
	int n;
	printf("enter max range: ");
	scanf("%d",&n);

	for (int i = 1; i < n; ++i)
	{
		//if(i%2==0)
		{
			printf("%d ",2*i-1);
		}
	}
	
	return 0;
}