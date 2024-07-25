//10.C program to delete vowels in a given string.

#include<stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{

		if( a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' )
		{			
			a[i]=' ';
		}
	
	}

	printf("\n%s",a);
}