/*15. Write a program in C to read a sentence and replace 
lowercase characters with uppercase and vice versa. */

#include<stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a'  && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]==' ')
		{
			continue;
		}
		else if(a[i] >= 'A'  && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}

		else
		{
			printf("invalid value");
		}
	}

	printf("%s",a);
}
