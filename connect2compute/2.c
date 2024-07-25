#include<stdio.h>

int main()
{
	char a[20];
	int i,cnt=0;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] !='\0';i++ )
	{
		cnt++;
	}
	printf("%d",cnt);
}

