//9.C program to convert lowercase vowel to uppercase in string.

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
			a[i]=a[i]-32;
		}
	
	}

	printf("\n%s",a);
}

