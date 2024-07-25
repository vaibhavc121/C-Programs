//5. Write a program in C to count the total number of words in a string.
#include<stdio.h>

int main()
{
	char a[30];
	int i;
	int cnt=1;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]==' ' || a[i]=='\n' || a[i]=='\t' )
		{
			cnt++;
		}			
	}

	printf("words: %d",cnt);

}