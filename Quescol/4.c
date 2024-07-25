//4.Write a program in C to print the Fibonacci series using iteration.

#include<stdio.h>

int main()
{
	int f1=0,f2=1,f3,i;


	for(i=1;i<=20;i++)
	{
		f3=f1+f2;
		printf("%d ",f3);
		
		f2=f3;f1=f2;
		

	}
	
}