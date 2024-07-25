#include <stdio.h>
int main()
{
	int a,b,c;

	printf("enter 1st num: ");
	scanf("%d", &a);

	printf("enter 2nd num: ");
	scanf("%d", &b);

	printf("enter 3rd num: ");
	scanf("%d", &c);

	if(c>=a && c<=b)
	{
		printf("%d is between %d and %d", c,a,b);
	}
	else
	{
		printf("%d is not between %d and %d", c,a,b);
	}

}