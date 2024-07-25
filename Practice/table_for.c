// a program in C to display the multiplication table for a given integer.
#include<stdio.h>

int main()
{
	int no,i;

	printf("input the integer (table to be calculated): ");
	scanf("%d", &no);

	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",no,i,no*i);
	}
	
	return 0;
}