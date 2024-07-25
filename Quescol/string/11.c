//11.C program to count Occurrence Of Vowels & Consonants in a String.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	int i,len,vol=0,con=0;

	printf("enter string: ");
	gets(a);

	len=strlen(a);

	for(i=0;i<len;i++)
	{
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' 
			|| a[i] == 'o' || a[i] == 'u' )
		{
			vol++;
		}
		else
		{
			con++;
		}

	}
	printf("vol: %d & con: %d",vol,con);
}