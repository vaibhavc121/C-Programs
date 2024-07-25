// Write a program in C to display n terms of natural numbers and their sum.
#include<stdio.h>

int main()
{
	int i,no;
	printf("enter value of terms: ");
	scanf("%d", &no);

	for(i=1;i<=no;i++)
	{
		printf("%d ",i);
		no+=i;
	}
	printf("%d",no);
	
	return 0;
}