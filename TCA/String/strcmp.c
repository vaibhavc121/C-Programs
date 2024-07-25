#include <stdio.h>
#include <string.h>

int main()
{
	/*int i,j,k;

	i=strcmp("aaa","aaa");
	j=strcmp("abc","cba");
	k=strcmp("fed","efd");

	printf("%d \n",i);
	printf("%d \n",j);
	printf("%d \n",k); */

	int i,j;

	char a[30];
	char b[30];

	printf("enter string for a: ");
	gets(a);

	printf("enter string for b: ");
	gets(b);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		
	}

	for(i=0; a[i] != '\0'; i++)
	{
		if(b[i]>='a' && b[i]<='z')
		{
			b[i]=b[i]-32;
		}
		
	}

	if(strcmp(a,b)==0)
	{
		printf("both strings are equal");
	}
	else
	{
		printf("both string are not equal");
	}

}

