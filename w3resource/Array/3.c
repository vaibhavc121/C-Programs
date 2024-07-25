//3. Write a program in C to find the sum of all elements of the array.

#include<stdio.h>

int main()
{
	int a[30];
	int n,i;
	int sum=0;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	printf("sum of array: %d", sum);
	
}