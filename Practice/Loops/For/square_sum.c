#include<stdio.h>

int main()
{
	int no,i,sum;
	
	printf("enter no: ");
	scanf("%d", &no);

	for(i=1;i<=5;i++)
	{
		printf("%d ",i*i);
		sum=sum+i*i;
	}
	printf("\n %d",sum);
	return 0;
}