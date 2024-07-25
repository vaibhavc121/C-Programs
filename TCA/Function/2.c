#include<stdio.h>

//fuction declaration
//int add(int, int);
//int sub(int, int);

//function definition
int add(int a,int b)
{
	int add;

	add=a+b;
	return add;
}

int sub(int a, int b)
{
	int sub;

	sub=a-b;

	return sub;

}

int mul(int a, int b)
{
	int mul;

	mul=a*b;

	return mul;

}

int fact(int a)
{
	int num=1,i;

	for(i=1;i<=a;i++)
	{
		num=num*i;
	}	

	return num;

}



int main()
{
	int a,b,tot;

	printf("Enter 1st no: ");
	scanf("%d",&a);
	
	printf("Enter 2nd no: ");
	scanf("%d",&b);

	tot=add(a,b);
	printf("addition is: %d\n",tot);

	tot=sub(a,b);
	printf("substraction is: %d\n",tot);
	
	tot=mul(a,b);
	printf("multiplication is: %d\n",tot);

	tot=fact(a);
	printf("fact of %d is: %d",a,tot);
	
	
	return 0;
}