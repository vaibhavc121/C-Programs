#include<stdio.h>

int main()
{
	int no,i,sum=0;
	
	//printf("enter no: ");
	//scanf("%d", &no);

	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\n %d",sum);
	
	return 0;
}