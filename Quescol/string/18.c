//18.C program to concatenate two strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	char b[30];
	int i,len;

	printf("enter string: ");
	gets(a);

	printf("enter string: ");
	gets(b);


	len=strlen(a)-1;
	printf("%d",len);
	for(i=0;a[i] != '\0';i++)
	{
		a[len]=b[i];
		len++;
	}
	printf("%s",a);
}