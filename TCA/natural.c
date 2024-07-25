#include <stdio.h>

int main()
{
	int num;

	printf("enter the no: ");
	scanf("%d", &num);

	if(num>0)
	{
		printf("given number is natural"); //if condition is true then print if otherwise execute else
	}
	else
	{
		printf("given number is not a natural number");
	}

	return 0;

	/*if(num<=0) 
	{
		printf("given number is not a natural number");
	}
	else
	{
		printf("given number is natural");
	} */

}