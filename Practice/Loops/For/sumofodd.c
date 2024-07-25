#include<stdio.h>

int main()
{
	int no,i,sum=0;
	
	printf("enter no: ");
	scanf("%d", &no);

	for(i=1;i<=no;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
			sum=sum+i;
		}
		
	}
	printf("\n%d",sum);
	
	return 0;
}