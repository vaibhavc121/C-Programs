//16.C Program to find the Average of numbers with explanations.

#include<stdio.h>

int main()
{
	int i,no;
	float avg,sno,sum=0;

	printf("how many nos: ");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		printf("enter %d no: ",i);
		scanf("%f",&sno);
		sum=sum+sno;
	}
	
	avg=sum/no;

	printf("%f",avg);
}