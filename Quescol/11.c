/*11.Write a program in C to swap two numbers without using third 
variable.*/

#include<stdio.h>

int main()
{
	int a=2,b=4;
	printf("before swap %d %d\n",a,b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("%d %d",a,b);
}