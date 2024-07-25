#include<stdio.h>

int main()
{
	int no,i=0;
	
	printf("enter no: ");
	scanf("%d", &no);
	for(i=1;i<=no;i++)
	{
		printf("%d ",i-1);
	}
	return 0;
}