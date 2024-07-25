#include<stdio.h>

int main()
{
	char a[30];
	int i;
	int cnt;
	cnt=0;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]>='a' || a[i]<='z' || a[i]>='0' || a[i]<='9')
		{
			cnt++;
		}

	}

	printf("no of characters in string is: %d", cnt);
	
}