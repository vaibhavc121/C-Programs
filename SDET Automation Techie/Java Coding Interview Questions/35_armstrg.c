//35. Count of the amstrong number
#include<stdio.h>

int main()
{
	int no,r,temp,i,n;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		no=i;
		int sum=0;	

		while(no>0)
		{
			r=no%10;
			sum=sum+(r*r*r);
			no=no/10;
		}

		if(sum==i)
		{
			printf("%d ",i);
		}
		/*else
		{
			printf("not armstrg");
			printf("%d",sum);

		}*/
	}

	
}