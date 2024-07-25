#include<stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter your name: ");
	gets(a);

	for(i=0;a[i];i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		
	}

	printf("updated name: %s",a);
}