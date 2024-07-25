#include<stdio.h>d

int main()
{
	char clr;

	printf("enter color: ");
	scanf("%c", &clr);

	switch(clr)
	{
	case 'R':
	case 'r':
	case 'O':
	case 'o':
	case 'Y':
	case 'y':	
	case 'G':	
	case 'g':
	case 'B':
	case 'b':
	case 'I':
	case 'i':
	case 'V':
	case 'v':
		printf("given clr is rainbow colr");
		break;
	default:
		printf("given clr is not rainbow colr");
	}

	return 0;
}