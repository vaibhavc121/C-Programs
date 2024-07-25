#include <stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter value: ");
	gets(a);

	for(i=0;i != '\0';i++)
	{
		if(a[i] == 'a' && a[i] == 'z')
		{
			a[i]=a[i]-30;
			printf("%s",a);
		}
		else if(a[i] == 'A' && a[i] == 'Z')
		{
			a[i]=a[i]+30;
			printf("%s",a);
		}
		else
		{
			printf("*");
		}
	}
}