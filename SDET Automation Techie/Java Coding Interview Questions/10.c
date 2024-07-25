//10.Swap of two variable without using third variable
#include<stdio.h>

int main()
{
	int a=10;
	int b=20;

	printf("before swap: %d %d", a, b);

	a=a+b;
	b=a-b;
	a=a-b;
	/*
	a=a*b;
	b=a/b;
	a=a/b;
	*/
	printf("\nafter swap: %d %d", a, b);
	
}