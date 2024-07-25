#include <stdio.h>

int main()
{
	char a[30];
	int i;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		printf("%d ",a[i]);
	}
}