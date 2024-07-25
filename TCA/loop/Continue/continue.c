#include <stdio.h>

int main()
{
	int i,n,sum=0;

	for(i=1;i<=5;i++)
	{
		printf("enter no: ");
		scanf("%d",&n);
		if(n<0)
		{
			continue;
		}
		sum=sum+n;
	}
	printf("%d\n",sum);
}
