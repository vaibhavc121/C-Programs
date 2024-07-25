#include <stdio.h>

int main()
{
	/*
	int a=10, b=20, temp;

	printf("before swap: %d %d",a,b);

	temp=a;
	a=b;
	b=temp;

	printf("after swap: %d %d",a,b );
	*/

	/*
	int a=10, b=20;

        a=a+b; //a=30
	b=a-b; //b=30-20=10
	a=a-b; //30-10=20
	

	printf("after swap: %d %d",a,b);
	*/
	
	/*
	int a,b;	

	printf("enter value of a: ");
	scanf("%d", &a);

	printf("enter value of b: ");
	scanf("%d",&b);

	printf("value before swap: %d %d", a,b);

	a=a+b; //a=30
	b=a-b; //b=30-20=10
	a=a-b; //30-10=20
	

	printf("\nvalue after swap: %d %d",a,b);
	*/

	/*
	int a,b;	

	printf("enter value of a: ");
	scanf("%d", &a);

	printf("enter value of b: ");
	scanf("%d",&b);

	printf("value before swap: %d %d", a,b);
	
	//a=10, b=20
	//expected a=20, b=10
	a=a*b; //
	b=a/b; //
	a=a/b; //

	printf("\nvalue after swap:  %d %d",a,b);

	return 0;
	*/
	
	int a,b;	

	printf("enter value of a: ");
	scanf("%d", &a);

	printf("enter value of b: ");
	scanf("%d",&b);

	printf("value before swap: %d %d", a,b);
	
	//a=2, b=4  expected=a=4, b=2
	a=a*b; //a=8
	b=a/b; //8/4=a/b=2 so,b=2
	a=a/b; //8/2=a/b=4 s0,a=4
	

	printf("\nvalue after swap:  %d %d",a,b);

	return 0;
}