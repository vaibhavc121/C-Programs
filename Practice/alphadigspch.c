#include<stdio.h>

int main()
{
	char ch;

	printf("enter a character: ");
	scanf("%c", ch);

	if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("alphabet");
	}
	else if (ch>=0)
	{
		printf("digit");
	}
	else
	{
		printf("special char");
	}

	return 0;
}