#include<stdio.h>

int main()
{
	char ch;

	printf("enter char: ");
	scanf("%c", &ch);
	
	switch(ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("vowel");
		break;
	default:
		printf("not an vowel");
	}

	return 0;
}