//7.C program to replace the string space with a given character.

#include<stdio.h>

int main()
{
	char a[30],ch;
	int i;

	printf("Enter the string : \n");
	gets(a);

	printf("Enter a char you want to replace with space : ");
	scanf("%c",&ch);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]==' ')
		{
			a[i]=ch;
		}
	}

	printf("String after removing ' ' String Become: %s\n",a);

	for(i=0;a[i] != '\0';i++)
	{
		printf("%c",a[i]);
	}


}