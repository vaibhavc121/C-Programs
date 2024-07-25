/*26. Write a program in C to count the number of punctuation characters
 present in a string.*/

#include<stdio.h>

int main()
{

	char a[30];
	int i,cnt=0;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]==',')
		{
			cnt++;
		}
	}

	printf("%s",a);
	
}