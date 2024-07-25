#include<stdio.h>

int main()
{
	int no,i,sum=0;
	
	printf("enter no: ");
	scanf("%d", &no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d",i);
		sum=sum*i;
	}
	printf("\n %d",sum);
	return 0;
}