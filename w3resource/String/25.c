/*25. Write a program in C to replace the spaces in a string with a 
specific character.*/

#include<stdio.h>

int main()
{

	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]==' ')
		{
			a[i]='*';
		}
	}

	printf("%s",a);
	
}