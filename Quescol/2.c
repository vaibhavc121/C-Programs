/*2.Write a program in C to check whether an integer is Armstrong number or not.*/

#include<stdio.h>

int main()
{
	int no,r,temp,sum=0;

	printf("enter no: ");
	scanf("%d",&no);
	temp=no;

	while(no>0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}	

	if(temp==sum)
	{
		printf("armg");
	}
	else
	{
		printf("not armg");
	}


}