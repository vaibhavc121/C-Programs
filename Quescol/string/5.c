//5.C program to check given character is vowel or consonant.

#include<stdio.h>

int main()
{
	char ch;

	printf("enter character: ");
	scanf("%c",&ch)	;

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("vowel");
		}
		else
		{
			printf("consonent");
		}
	}
	else
	{
		printf("%c is neither vowel nor consonent",ch);
	}
		
}