#include <stdio.h>

int main()
{
	int no;

	printf("enter no: ");
	scanf("%c", &no);

	printf("no without last digit: %c\b\b",no);

	return 0;
}