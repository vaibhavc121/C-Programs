#include<stdio.h>

int main()
{
	char op;
	int a,b;

	printf("select operation (+,-,*,/): ");
	scanf("%c", &op);

	printf("enter 2 nos: ");
	scanf("%d %d", &a, &b);


	switch(op)
	{
	case '+':
		printf("addition of %d & %d is %d",a,b,a+b );
		break;
	case '-':
		printf("substraction of %d & %d is %d",a,b,a-b );
		break;
	case '*':
		printf("multi of %d & %d is %d",a,b,a*b );
		break;
	case '/':
		printf("div of %d & %d is %d",a,b,a/b );
		break;
	}
	
	return 0;
}