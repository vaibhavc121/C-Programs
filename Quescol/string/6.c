//6.C program to check given character is digit or not.

#include<stdio.h>

int main()
{
	char ch;

	printf("enter character: ");
	scanf("%c",&ch);

	if(ch>='0' && ch<='9')
	{
		printf("digit");
	}
	else
	{
		printf("not digit");
	}
}