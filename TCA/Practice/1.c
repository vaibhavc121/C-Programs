#include<stdio.h>

int main()
{
	char a[4][40];
	int i;

	for(i=0;i<4;i++)
	{
		printf("enter string: ");
		gets(a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("%s ",a[i]);
	}
	
	
}