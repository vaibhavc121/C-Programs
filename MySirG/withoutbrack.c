#include<stdio.h>

int main()
{
	int a,b;

	printf("enter no: ");
	scanf("%d %d", &a, &b);

	if (a>b)
		printf("a big");
	else
		printf("b big");

	
	return 0;
}