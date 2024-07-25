/*4. Write a program in C to copy the elements of one array into another array.*/

#include<stdio.h>

int main()
{
	int a[30];
	int b[30];
	int n,i;
	
	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}

	printf("array a: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\narray b: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}

}
