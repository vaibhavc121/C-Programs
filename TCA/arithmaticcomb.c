#include<stdio.h>

int main()
{
	char ch;
	int a,b,c;

	printf("enter character: ");
	scanf("%c", &ch);

	if(ch=='+')
	{
		printf("enter 1st no: ");
		scanf("%d", &a);

		printf("enter 2nd no: ");
		scanf("%d", &b);

		c=a+b;

		printf("addition is %d", c);

	}
	else if(ch=='-')
	{
		printf("enter 1st no: ");
		scanf("%d", &a);

		printf("enter 2nd no: ");
		scanf("%d", &b);

		c=a-b;

		printf("substraction is %d", c);

	}
	else if(ch=='*')
	{
		printf("enter 1st no: ");
		scanf("%d", &a);

		printf("enter 2nd no: ");
		scanf("%d", &b);

		c=a*b;

		printf("multiplication is %d", c);

	}
	else if(ch=='/')
	{
		printf("enter 1st no: ");
		scanf("%d", &a);

		printf("enter 2nd no: ");
		scanf("%d", &b);

		c=a/b;

		printf("division is %d", c);

	}
	else
	{
		printf("invalid character");
	}
}