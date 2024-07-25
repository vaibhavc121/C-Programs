#include<stdio.h>

int main()
{
	int i,n,sum=0;

	printf("enter term: ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		//printf("%d\n",i);
		if(i%2 != 0)
		{
			printf("%d\n",i);
			sum=sum+i;

		}

	}
	printf("sum of odd: %d",sum);
	return 0;
}