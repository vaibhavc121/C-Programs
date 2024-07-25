/*10.Write a program in C to find sum of digits of a number 
using recursion.*/

#include<stdio.h>

void sum(int no)
{
	int sum=0,r;

	while(no>0)
	{
		r=no%10;
		sum=sum+r;
		no=no/10;
	}

	printf("%d",sum);
}

int main()
{
	int no; 

	printf("enter no: ");
	scanf("%d",&no);

	sum(no);
}