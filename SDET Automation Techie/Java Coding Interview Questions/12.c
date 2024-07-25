//12. Count of even and odd count
#include<stdio.h>

int main()
{
	int n,i,evencnt,oddcnt;

	evencnt=0;
	oddcnt=0;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			evencnt++;
		}
		else
		{
			oddcnt++;
		}	
	}
		
	printf("even count: %d, odd count: %d", evencnt, oddcnt);
	
}