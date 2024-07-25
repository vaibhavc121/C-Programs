#include<stdio.h>

int main()
{
	int no,res;

	printf("enter no: ");
	scanf("%d", &no);
	//res=no%2;
	printf("%d", res);
	if (res=no%2)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}