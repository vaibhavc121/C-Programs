//8.C program to convert lowercase char to uppercase of string.

#include<stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{

		a[i]=a[i]-32;/*
		if( a[i] >= 'a' && a[i] <= 'z' )
		{
			
		}*/
	
	}

	printf("\n%s",a);
}