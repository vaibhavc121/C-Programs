#include <stdio.h>

int main()
{
	int a,b,c, sum;

	printf("enter 1st no: ");
	scanf("%d", &a);

	printf("enter 2nd no: ");
	scanf("%d", &b);

	printf("enter 3rd no: ");
	scanf("%d", &c);

	sum=a+b+c;	

	printf("sum of digit: %d", sum );

	return 0;
}