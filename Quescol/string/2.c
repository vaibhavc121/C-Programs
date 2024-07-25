/*2.Write a program in C to count occurrence of a given 
character in a String.*/

#include<stdio.h>

int main()
{
	int i,cnt=0;

	char a[30]="Quescol Website";

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i]=='s')
		{
			cnt++;
		}
	}

	printf("%d",cnt);
}