#include<stdio.h>

int main()
{
	int no;

	printf("enter no: ");
	scanf("%d", &no);

	if(no>0)
	{
		printf("%d is +ve", no );
	}
	else
	{
		printf("%d is -ve", no );
	}
	

	return 0;
}