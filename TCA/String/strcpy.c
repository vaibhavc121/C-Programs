#include<stdio.h>
#include <string.h>

int main()
{
	char a[30];
	char b[30];

	printf("enter value in string b: ");
	gets(b);

	strcpy(a,b);

	printf("a: %s b: %s", a,b);
	
}