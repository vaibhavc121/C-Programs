//8.Write a program in C to find greatest among three integers.

#include<stdio.h>

int main()
{
	int a,b,c,d;

	printf("enter 4 nos: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a>b && a>c && a>d)
	{
		printf("a is greater");
	}
	else if(b>a && b>c && b>d)
	{
		printf("b is greater");
	}
	else if(c>a && c>b && c>d)
	{
		printf("c is greater");
	}
	else
	{
		printf("%d is greater",d);
	}


}