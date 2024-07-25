// 14.Write C Program to Check if Given Number is Integer or Float

#include<stdio.h>
#include<math.h>

int main()
{
	float no;
	int n;

	printf("enter num: ");
	scanf("%f",&no);

	n=floor(no);

	if(n==no)
	{
		printf("given no is integer");
	}
	else
	{
		printf("no is float");
	}
}