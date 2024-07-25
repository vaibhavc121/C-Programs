#include<stdio.h>

int main()
{
	int no,i,sum,term;

	printf("up to what u want to print: ");
	scanf("%d",&term);
	
	for (int no = 1; no<=term; no++)
	{
		sum=0;
		for(i=1;i<no;i++)
		{
			if(no%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==no)
		{
			printf("%d ",no);
		}

	}
	return 0;
}