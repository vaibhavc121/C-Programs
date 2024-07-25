
/*1.Write a program in C for, In array 1-100 numbers are stored, 
one number is missing how do you find it.*/

#include<stdio.h>

int main()
{
	int a[30]={1,2,3,5};
	int i,sum=0,n,sn,mn;

	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}

	sn=5*(5+1)/2;

	printf("missing no: %d",mn=sn-sum);

	





	
}

