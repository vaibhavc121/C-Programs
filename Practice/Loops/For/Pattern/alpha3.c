#include<stdio.h>

int main()
{
	char i;
	for(i='a';i<='z';i++) //internally compiler read as 97 for char a 
	{
		printf("%d ",i);
	}
	return 0;
}