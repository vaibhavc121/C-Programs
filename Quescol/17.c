//17.C Program to calculate factorial using iterative method.

#include<stdio.h>

void fact(int no)
{
	int i,sum=1;
	for(i=1;i<=no;i++)
	{
		sum=sum*i;
	}

	printf("%d",sum);
}

int main()
{
	int no;

	printf("enter no: ");
	scanf("%d",&no);

	fact(no);


}