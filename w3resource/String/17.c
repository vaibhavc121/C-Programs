/*17. Write a program in C to remove characters from a
 string except alphabets.*/

#include<stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0'; i++)
	{
		if(a[i]>='1' && a[i]<='9')
		{
			a[i]='';
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			continue;
		}
		else
		{
			a[i]='';
		}

	}
	printf("%s",a);
}