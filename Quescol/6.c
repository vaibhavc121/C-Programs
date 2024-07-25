/*6.Write a program in C to check whether a number is palindrome or 
not using iteration.*/

#include<stdio.h>

int main()
{
	int rev=0,no,r,temp;

	printf("enter no: ");
	scanf("%d",&no);
	temp=no;

	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(temp==rev)
	{
		printf("palin");
	}
	else
	{
		printf("not palin");
	}


}