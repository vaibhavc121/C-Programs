#include<stdio.h>

int main()
{
	int num;
	float last;

	printf("enter no: ");
	scanf("%d", &num);

	last=num/10.0;

	printf("last digit: %f", last);
}