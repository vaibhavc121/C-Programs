/*2. Write a program in C to read n number of values in an array and 
display them in reverse order. */

#include<stdio.h>

int main()
{
	int a[30];
	int n,i;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	/*for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}*/

	for(i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}