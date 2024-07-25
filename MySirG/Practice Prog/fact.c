#include<stdio.h>

int main()
{
	int no,sum=1,i;
	
	printf("enter no: \n");
	scanf("%d", &no);
	
	for(i=1;i<=no;i++)
	{
		sum=sum*i;
	}
	printf("fact of %d is: %d",no, sum);
	return 0;
}