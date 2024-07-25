#include <stdio.h>

int main()
{
	int a,b;

	printf("enter 1st num");
	scanf("%d", &a);

	printf("enter 2nd num");
	scanf("%d", &b);
	
	if(a>b)
	{
		printf("%d is greater",a );
	}
	else
	{
		printf("%d is greater",b);
	}
	return 0;
}