#include<stdio.h>

int main()
{
	int num;

	printf("enter num: ");
	scanf("%d",&num);

	if(num<0)
	{
		printf("%d is negative", num);
	}
	else if(num>0)
	{
		printf("%d is positive", num);
	}
	else
	{
		printf("num is zero", num);
	}

	return 0;

}