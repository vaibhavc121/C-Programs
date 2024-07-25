//Write a program in C to display the cube of the number up to an integer.
#include<stdio.h>

int main()
{
	int no,i;

	printf("enter term: ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("number is: %d and cube of the %d is: %d\n", i, i, i*i*i );
	}
	
	return 0;
}