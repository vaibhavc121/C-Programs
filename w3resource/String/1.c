//1. Write a program in C to input a string and print it.
#include<stdio.h>

int main()
{
	char a[30];

	printf("Input the string: ");
	gets(a);

	printf("\nThe string you entered is : %s",a);
	
}