//20. C program to copy one string to another string.

#include<stdio.h>

int main()
{
	char a[30];
	char b[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		b[i]=a[i];
	}

	printf("\nafter copying b: %s",b);
}