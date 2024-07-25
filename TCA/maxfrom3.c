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

	if(a>b)
	{
		printf("%d is greater", a);
	}
	else if(b>c)
	{
		printf("%d is greater", b);

	}
	else if(a>c)
	{
		printf("%d is greater", a);

	}


	else if(a==b)
	{
		printf("%d is greater", c);
	}
	else if(b==c)
	{
		printf("%d is greater", a);
	}
	else if(a==c)
	{
		printf("%d is greater", b);
	}
	else if(a==b==c)
	{
		printf("all are same");
	}
	else if(a==b)
	{
		if(b==c)
		{
			printf("all are same");
		}
	}

	
	else 
	{
		printf("%d is greater", c);
		//printf("all are same");

	}
	
	return 0;
}