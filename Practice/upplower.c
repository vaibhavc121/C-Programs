#include<stdio.h>

int main()
{
	char ch;

	printf("enter alphabet: ");
	scanf("%c", &ch);

	if(ch>='a' && ch<='z' )
	{
		printf("%c is lowercase", ch);
	}
	else if(ch>='A' && ch<='Z' )
	{
		printf("%c is uppercase", ch);
	}
	else
	{
		printf("%c is not a alphabet", ch);
	}

	return 0;
}