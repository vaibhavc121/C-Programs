#include<stdio.h>

int main()
{
	char ch;

	printf("enter color: ");
	scanf("%c", &ch);

	if (ch=='R' || ch=='r' || ch=='O' || ch=='o' || ch=='Y' || ch=='y' || ch=='G' || ch=='g' ||
		ch=='B' || ch=='b' || ch=='I' || ch=='i' || ch=='V' || ch=='v')
	{
		printf("given coclor is rainbow color");
	}
	else
	{
		printf("given coclor is not a rainbow color");
	}

	return 0;
}