#include <stdio.h>

int main()
{
	char a[30];
	int scount=0;
	int i;

	printf("enter value: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			scount++;
		}
	}

	printf("length of string: %d",scount);
}