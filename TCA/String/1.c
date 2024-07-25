#include <stdio.h>

int main()
{
	int i;
	char a[]="vaibhav";
	for(i=0;a[i] != '\0';i++)
	{
		printf("%c ", a[i]);
	}
	printf("%d",a[7]);
	
}