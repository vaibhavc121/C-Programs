//15.Write a program in C to check given number is perfect or not.
#include<stdio.h>

int main()
{
	int no,i,sum=0;

	printf("enter no: ");
	scanf("%d",&no);

	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}

	if(no==sum)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}

}