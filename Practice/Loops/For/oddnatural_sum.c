// a C program to display the n terms of odd natural numbers and their sum.
#include<stdio.h>

int main()
{
	int no,i,sum=0;

	printf("enter term: ");
	scanf("%d", &no);

	for(i=1;i<=no;i++)
	{
		if(i%2==1)
		{
			printf("%d \n",i);
			sum=sum+i;
		}
		
	}
	printf("sum of odd natural numbers upto 10 term: %d",sum);
	return 0;
}