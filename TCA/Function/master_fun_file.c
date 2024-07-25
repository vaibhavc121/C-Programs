#include <stdio.h>

//function declaration or prototype
void natural(int);
void sum_natural(int);
void sum_even(int);
void whole(int);
void even(int);
void odd(int);
int check_even(int);
int check_odd(int);
void addition(int, int);
void greater2(int, int);
void greater3(int, int, int);
void swap(int, int);
void swap1(int, int);
void swap2(int, int);
void factorial(int);
//int armstrg(int);
void reverse(int);
int palindrome(int);
//void strong(int);
void pattern0(int, int);
void pattern1();
void pattern2();
//void pattern3();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
//===================================================================
//===================================================================

//function definition

void natural(int n)
{
	int i;

	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
}

void sum_natural(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
}

void sum_even(int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}

	}
	printf("%d\n",sum);
}

void whole(int n)
{
	int i;

	for(i=0;i<=n;i++)
	{
		printf("%d ",i);
	}
}

void even(int n)
{
	int i;

	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}

void odd(int n)
{
	int i;
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}		
	}
}

int check_even(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int check_odd(int n) 
{
	if(n%2==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void arith_op(int a, int b)
{
	int c;
	printf("addition is %d\n",c=a+b);
	printf("substraction is %d\n",c=a-b);
	printf("multiplication is %d\n",c=a*b);
	printf("division is %d\n",c=a/b);
}

void greater2(int a, int b)
{
	if(a>b)
	{
		printf("%d is greater\n",a);
	}
	else
	{
		printf("%d is greater\n",b);
	}
}

void greater3(int a, int b, int c)
{
	if(a>b || a>c)
	{
		printf("%d is greater\n",a);
	}
	else if(b>a || b>c)
	{
		printf("%d is greater\n",b);
	}
	else
	{
		printf("%d is greater\n",c);
	}
}

void swap(int a, int b)
{
	int c;

	printf("before swap: %d %d\n", a,b);
	c=a;
	a=b;
	b=c; 	
	printf("after swap: %d %d\n",a,b);
}

void swap1(int a, int b)
{
	printf("before swap: %d %d\n", a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swap: %d %d\n",a,b);
}

void swap2(int a, int b)
{
	printf("before swap: %d %d\n", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap: %d %d\n",a,b);
}

void factorial(int n)
{
	int i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("factorial of %d is %d\n",n,sum);
}
/*
void strong(int n)
{
	int sum=1,i,rem;
  while(n>0)
  {
  	rem=n%10;
	for(i=1;i<rem;i++)	
	{
		sum=sum*i;
	}
	n=n/10;
  }
	printf("strong: %d",sum);
} */

/*
int armstrg(int n)
{
	int rem,tnum;
	tnum=n;
	int sum=0;
	while(n>0)
	{
		
		rem=n%2;

		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==tnum)
	{
		return 1;
	}
}
*/

void reverse(int no)
{
	int rev=0,rem;

	while(no>0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;
	}
	printf("reverse is: %d\n",rev);
}

int palindrome(int no)
{
	int rem,tno,rev=0;
	tno=no;

	while(no>0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;
	}

	if(tno==rev)
	{
		return 1;
	}

}

void pattern0(int row, int cols)
{
	int i,j;

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=cols;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern1()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

}

void pattern2()
{
	int i,j;

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

}

void pattern3()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

/*void pattern4()  file no.4
{
	int i,j,k;

	for(i=1;i<=5;i++)
	{
		for(k=4;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
} */

void pattern5()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern6()
{
	int i,j;

	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%3d ",i*j);
		}
		printf("\n");
	}
}

void pattern7()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern8()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

//===================================================================
//===================================================================
//function body
int main()
{
	int n,a,b,c,num,arm;

	printf("print natural nos till: ");
	scanf("%d",&n);

	natural(n);
	printf("\n");

	sum_natural(n);
	sum_even(n);

	whole(n);
	printf("\n");

	even(n);
	printf("\n");

	odd(n);
	printf("\n");

	num=check_even(n);
	if(num==1)
	{
		printf("%d is even no", n);
	}
	else
	{
		printf("%d is not even no", n);
	}

	printf("\n");
	num=check_odd(n);
	if(num==1)
	{
		printf("%d is odd no\n");
	}
	else
	{
		printf("%d is not an odd no\n");
	}
	
	/* 												not working
	arm=armstrg(n);
	if(arm==1)
	{
		printf("%d is armstrg no\n",n);
	}
	else
	{
		printf("something is wrong\n");
	}*/

	
	printf("\n");
	printf("enter 1st no: ");
	scanf("%d",&a);

	printf("enter 2nd no: ");
	scanf("%d",&b);

	arith_op(a,b);

	greater2(a,b);

	printf("enter 3rd no: ");
	scanf("%d",&c);

	greater3(a,b,c);

	swap(a,b);
	swap1(a,b);
	swap2(a,b);
	factorial(n);
	//strong(n);                				not completed
	printf("\n");

	int no,pal;
	printf("enter no: ");
	scanf("%d",&no);

	reverse(no);
	pal=palindrome(no);
	if(pal==1)
	{
		printf("%d is palindrome no\n",no);
	}
	else
	{
		printf("%d is not palindrome no\n",no);
	}

	printf("\n");

	int row,cols;

	printf("how many rows: ");
	scanf("%d",&row);

	printf("how many cols: ");
	scanf("%d",&cols);

	pattern0(row,cols);

	printf("\n");
	pattern1();

	printf("\n");
	pattern2();

	/*printf("\n"); file ptrn 4
	pattern3(); */

	printf("\n");
	pattern5();

	printf("\n");
	pattern6();

	printf("\n");
	pattern7();

	printf("\n");
	pattern8();




	return 0;
}