//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>

int main()
{
	int i,no,sum=0;
	float avg;
	for(i=1;i<=10;i++)
	{
		printf("number-%d\n",i);
		scanf("%d",&no);
		sum=sum+no;
	}
	avg=sum/10.0;
	printf("sum is %d\n avg is %f",sum,avg);
	
	return 0;
}