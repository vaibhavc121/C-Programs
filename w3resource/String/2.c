//2. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>

int main()
{
	int i,cnt=0;
	char a[30];
	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]>='a' || a[i]<='z' )
		{
			cnt++;
		}
	}

	printf("length: %d",cnt);
}