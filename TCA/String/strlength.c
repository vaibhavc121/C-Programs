#include <stdio.h>
#include <string.h>

int main()
{
	char a[30];
	int cnt;

	printf("enter string: ");
	gets(a);

	cnt=strlen(a);

	printf("length: %d",cnt);


}
