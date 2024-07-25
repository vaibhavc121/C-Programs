#include<stdio.h>

int main()
{
	int a,b,c;

	printf("enter 1st no: ");
	scanf("%d", &a);

	printf("enter 2nd no: ");
	scanf("%d", &b);

	printf("enter 3rd no: ");
	scanf("%d", &c);

	if(a>b && a>c)
	{
		printf("%d is big", a);
	}
	else if(b>a && b>c)
	{
		printf("%d is big", b);
	}
	else if(a==b && b==c)
	{
		printf("all same");
	}
	else
	{
		printf("%d is big", c);
	}

	
	
	
	
	return 0;
}