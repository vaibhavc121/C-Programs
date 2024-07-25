/*16. Write a program in C to find the number of times a given word 
'the' appears in the given string.*/

#include<stdio.h>

int main()
{
	char a[30];
	int i,cnt=0;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]=='a')
		{
			cnt++;
		}
	}

	printf("%d",cnt);


	
}