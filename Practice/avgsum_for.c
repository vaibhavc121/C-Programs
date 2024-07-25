//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include<stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	int sum,avg;
	
	printf("enter no: ");
	scanf("%d", &n1);

	printf("enter no: ");
	scanf("%d", &n2);
	
	printf("enter no: ");
	scanf("%d", &n3);
	
	printf("enter no: ");
	scanf("%d", &n4);
	
	printf("enter no: ");
	scanf("%d", &n5);
	
	printf("enter no: ");
	scanf("%d", &n6);
	
	printf("enter no: ");
	scanf("%d", &n7);
	
	printf("enter no: ");
	scanf("%d", &n8);
	
	printf("enter no: ");
	scanf("%d", &n9);
	
	printf("enter no: ");
	scanf("%d", &n10);

	sum=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;

	printf("sum:%d",sum);
	printf("avg:%d",avg=sum/10);
	
	
	return 0;
}