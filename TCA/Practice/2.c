#include<stdio.h>

int main()
{
	char a[30];

	printf("enter string: ");
	//scanf("%s",&a);
	gets(a);

	printf("%s",a);
}