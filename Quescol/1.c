//1.Write a program to reverse an integer in C.
#include<stdio.h>

int main()
{
	int no,r,rev=0;

	printf("enter no: ");
	scanf("%d",&no);

	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	printf("%d",rev);
	
}